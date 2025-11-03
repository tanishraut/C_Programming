#include <stdio.h>

void CheckNUmberType(int iNo)
{
    if( iNo >= 1 )
    {
        printf("Positive");
    }
    else if (iNo <= -1)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    CheckNumberType(iValue);

    return 0 ;
}