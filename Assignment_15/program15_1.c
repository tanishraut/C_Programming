#include <stdio.h>

int CountEven(int iNo)
{
    int cnt = 0;
    int digit;

// Time Complexity: O(d)

    if (iNo < 0)
        iNo = -iNo;

    if (iNo == 0) 
        return 1;

    while (iNo > 0)
    {
        digit = iNo % 10;
        if (digit % 2 == 0)
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

    iRet = CountEven(iValue);

    printf("%d\n", iRet);

    return 0;
}
