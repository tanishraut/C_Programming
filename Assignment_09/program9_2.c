#include <stdio.h>

int DollarToInr( int iNo )
{

// One-time operation Time Complexity = O(1)

    if( iNo > 0)
    {
        return iNo * 70;        // 1 USD = 70 INR
    }
    else
    {
        return 0 ;
    }
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter Dollar : ");
    scanf("%d",&iValue);
    iRet = DollarToInr(iValue);

    printf("Value In INR : %d",iRet);

    return 0 ;
}