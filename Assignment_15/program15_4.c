#include <stdio.h>

int MultDigits(int iNo)
{
    int mult = 1;
    int digit;
    int hasDigit = 0;

// Time Complexity: O(d)

    if (iNo < 0)
        iNo = -iNo;

    if (iNo == 0)
        return 0; 

    while (iNo > 0)
    {
        digit = iNo % 10;
        mult *= digit;
        iNo = iNo / 10;
        hasDigit = 1;
    }


    return mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}
