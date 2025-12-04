#include <stdio.h>
#include <stdlib.h>

int Frequency( int Arr[] , int iSize)
{
    int iCnt = 0 , iCounter = 0;


    for( iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCounter ++ ;
        }
    }

    return iCounter;

}

int main ()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the Size of Array : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to Allocate Memory");
        return -1 ;
    }
    

    printf("Enter %d Numbers of Elements \n",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency( ptr , iLength );
    
    printf("Frequency of 11 in Array is %d",iRet);

    free(ptr);
    return 0 ;

}