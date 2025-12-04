#include <stdio.h>
#include <stdlib.h>

int CheckEven(int Brr[] , int iNo)
{
    int iCnt = 0, iCount = 0;
    for(iCnt = 0 ; iCnt < iNo ; iCnt++)
    {
        if(Brr[iCnt] %2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main ()
{
    int *ptr = NULL , iLength = 0 ;
    int i = 0;
    int iRet = 0 ;
    
    
    printf("Enter the Length of Array : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)
    {
        printf("Unable to alocate memory");
        return -1 ;
    }

    printf("Enter %d Elements :", iLength);
    for(i = 0 ; i < iLength ; i++)
    {
    scanf("%d",&ptr[i]);
    }

    iRet = CheckEven(ptr , iLength );
    printf("Total Even Elements in Array %d",iRet);

    free(ptr);
    return 0 ;
}