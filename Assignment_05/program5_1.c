#include <stdio.h>
#include <stdbool.h>

int CheckEvenOdd(int iNo)
{
    if( iNo % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    int iValue = 0;
   
    printf("Enter No : ");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);

    return 0;
}