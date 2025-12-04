#include <stdio.h>
#include <stdlib.h>

int LastOcc( int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;
    

    for (iCnt = iSize-1 ; iCnt >= 0 ; iCnt --)
    {
        if (Arr[iCnt] == iNo)
        {
            return iCnt ;
        }

    }

    return -1 ;
}


int main ()
{
    int *ptr = NULL , iLength = 0 , iValue = 0;
    int iCnt = 0 ;
    int iRet = 0 ;

    printf("Enter the Size of Array : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (NULL == ptr)
    {
        printf("Unable to Allocate Memory");
        return -1 ;
    }

    printf("Enter the number you want to check : ");
    scanf("%d",&iValue);

    printf("Enter %d Numbers of Elements : \n",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = LastOcc( ptr , iLength , iValue);

    printf("Last occurrence of %d is at index %d \n", iValue, iRet);

    free(ptr);

    return 0 ;
}