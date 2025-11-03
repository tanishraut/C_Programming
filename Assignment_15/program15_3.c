#include <stdio.h>

int CountRange(int iNo)
{
    int cnt = 0;
    int digit;

// Time Complexity: O(d)

    if (iNo < 0)
        iNo = -iNo;

    while (iNo > 0)
    {
        digit = iNo % 10;
        if (digit >= 3 && digit <= 7)
            cnt++;
        iNo = iNo / 10;
    }
    return cnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d\n", iRet);

    return 0;
}
