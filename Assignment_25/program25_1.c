#include <stdio.h>
#include <stdlib.h>

void DisplayEvenOddSum(int Brr[] , int iSize)
{
    int iCnt = 0 , iSumEven = 0 , iSumOdd = 0;
    int iDiff = 0;
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Brr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Brr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Brr[iCnt];
        }
    }
    
    iDiff = iSumEven - iSumOdd;
    printf("Differnce : %d (%d - %d)",iDiff,iSumEven,iSumOdd);
}

int main()
{
    int *Arr = NULL , iLength = 0; 
    int iCnt = 0;

    printf("Enter the Size of Array : ");
    scanf("%d", &iLength);

    Arr = (int *)malloc(iLength * sizeof(int));

    if(NULL == Arr)
    {
        printf("Unable to Allocate the Memory");
        return -1;
    }

    printf("Enter %d Elements in Array : \n",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    DisplayEvenOddSum( Arr , iLength);

    free(Arr);
    return 0 ;
}