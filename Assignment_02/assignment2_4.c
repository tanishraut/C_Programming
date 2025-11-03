#include <stdio.h>
void Display(int iNo, int iFrequency)
{
    int iCnt = 0;  
    for (iCnt = 1; iCnt <= iFrequency; iCnt++)      //( Initialization; Condition; Increment)
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    printf("Enter Frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}


////////////////////////////////////////////////////////
//  Input: 12 5
//  Output: 12 12 12 12 12
//
//  Input: -2 3
//  Output: -2 -2 -2
//
//  Input: 21 -3
//  Output: 21 21 21
//
//  Input:-2 0
//  Output:
//
////////////////////////////////////////////////////////