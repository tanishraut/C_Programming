#include<stdio.h>

int Fdiff(int iNo)
{
    int iCnt = 0;
    int iSumFac = 0;
    int iSumNonFac = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFac = iSumFac + iCnt;      
        }
        else
        {
            iSumNonFac = iSumNonFac + iCnt;
        }
    }

    return iSumFac - iSumNonFac;  
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Fdiff(iValue);

    printf("%d\n", iRet);

    return 0;
}