#include <stdio.h>
#include <stdlib.h>

int Minimum(int Brr[] , int iSize)
{
    int iCnt = 0;
    int iMax = Brr[0] , iMin = Brr[0];
    
    for(iCnt = 1 ; iCnt < iSize ; iCnt++ )
    {
        if(Brr[iCnt] > iMax)
        {
            iMax = Brr[iCnt];
        }
        else if(Brr[iCnt] < iMin)
        {
            iMin = Brr[iCnt];
        }
    }

    return iMax - iMin;


}

int main()
{
    int *Arr = NULL , iLength = 0 ;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the Size of Array : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(iLength * sizeof(int));

    if(NULL == Arr)
    {
        printf("Unable to Allocate Memory");
        return -1 ;
    }

    printf("Enter %d Number of Elements in Array : \n",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Minimum( Arr , iLength);

    printf("Range of Array (Max - Min) : %d", iRet);

    free(Arr);
    
    return 0 ;

}