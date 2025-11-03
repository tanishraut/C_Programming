#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit;

// Time Complexity: O(d) where d = number of digits

    if (iNo < 0)
        iNo = -iNo;

    if (iNo == 0)
    {
        printf("0\n");
        return;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}
