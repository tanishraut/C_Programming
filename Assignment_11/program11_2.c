#include <stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt;

    // Time Complexity: O(n/2) => O(n)

    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }


    if (iStart % 2 != 0)
        iStart++;

    for (iCnt = iStart; iCnt <= iEnd; iCnt += 2)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

