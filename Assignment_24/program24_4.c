#include <stdio.h>
#include <stdlib.h>

void DisplayThreeDigit( int Brr[] , int iSize)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Brr[iCnt] >= 100 && Brr[iCnt] <= 999) || (Brr[iCnt] <= -100 && Brr[iCnt] >= -999))

        {
            printf("%d ",Brr[iCnt]);
        }
    }
}

int main()
{
    int *Arr = NULL , iLength = 0;
    int iCnt = 0;

    printf("Enter the Size of Array : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(iLength * sizeof(int));

    if(NULL == Arr)
    {
        printf("Unable to Allocate Memory");
    }

    printf("Enter %d Number of Elements in Array : \n",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&Arr[iCnt]);

    }

    DisplayThreeDigit( Arr , iLength);
    free(Arr);

    return 0 ;
}

