#include <stdio.h>

void Pattern( int iNo)
{
    char Arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int iCnt = 0;
    for (iCnt = 0 ; iCnt < iNo; iCnt++)
    {
        printf("%c ", Arr[iCnt]);
    }
}

int main()
{
    int iValue  = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
