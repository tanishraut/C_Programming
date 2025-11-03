#include <stdio.h>

void DisplayMulti( int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <=5 ; iCnt ++)
    {
        printf("%d ",iNo * iCnt);
    }
}

int main ()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayMulti(iValue);

    return 0 ;
}