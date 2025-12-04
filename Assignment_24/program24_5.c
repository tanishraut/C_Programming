#include <stdio.h>
#include <stdlib.h>

void DisplaySum(int Brr[], int iSize)
{
    int iCnt = 0;
    int iNo = 0, iDigit = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Brr[iCnt];   
        iSum = 0;          

     
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d\t", iSum);
    }
}

int main()
{
    int *Arr = NULL, iLength = 0;
    int iCnt = 0;

    printf("Enter the Size of Array : ");
    scanf("%d", &iLength);

    Arr = (int *)malloc(iLength * sizeof(int));

    if(Arr == NULL)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter %d Number of Elements in Array : \n", iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    DisplaySum(Arr, iLength);

    free(Arr);
    return 0;
}
