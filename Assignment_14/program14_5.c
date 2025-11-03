#include <stdio.h>

int Count(int iNo)
{
    int cnt = 0;
    int digit;

// Time Complexity: O(d)

    if (iNo < 0)
        iNo = -iNo;

    while (iNo > 0)
    {
        digit = iNo % 10;
        if (digit < 6)
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

    iRet = Count(iValue);

    printf("%d\n", iRet);

    return 0;
}
