#include <stdio.h>

int CountTwo(int iNo)
{
    int cnt = 0;
    int digit;

// Time Complexity: O(d)

    if (iNo < 0)
        iNo = -iNo;

    if (iNo == 0)
        return 0;

    while (iNo > 0)
    {
        digit = iNo % 10;
        if (digit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d\n", iRet);

    return 0;
}
