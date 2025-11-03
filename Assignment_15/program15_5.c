#include <stdio.h>

int CountDiff(int iNo)
{
    int se = 0; 
    int so = 0; 
    int digit;

// Time Complexity: O(d)

    if (iNo < 0)
        iNo = -iNo;

    if (iNo == 0)
        return 0; 

    while (iNo > 0)
    {
        digit = iNo % 10;
        if (digit % 2 == 0)
            se += digit;
        else
            so += digit;
        iNo = iNo / 10;
    }

    return (se - so);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}
