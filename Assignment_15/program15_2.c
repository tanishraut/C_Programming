#include <stdio.h>

int CountOdd(int iNo)
{
    int cnt = 0;
    int digit;

// Time Complexity: O(d)

    if (iNo < 0)
        iNo = -iNo;

    if (iNo == 0)
        return 0;    // 0 = Even

    while (iNo > 0)
    {
        digit = iNo % 10;
        if (digit % 2 != 0)
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

    iRet = CountOdd(iValue);

    printf("%d\n", iRet);

    return 0;
}
