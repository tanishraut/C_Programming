#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{

// Time Complexity: O(d) where d = number of digits


    int digit;
    if (iNo < 0)
        iNo = -iNo;

    if (iNo == 0)
        return TRUE;

    while (iNo > 0)
    {
        digit = iNo % 10;
        if (digit == 0)
            return TRUE;
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}
