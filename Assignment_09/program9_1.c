#include<stdio.h>

void Display( int iNo)
{
    int iCnt = 0;
    if (iNo< 0)
    {
        iNo = -iNo ;
    }  

    // Time Complexity = O(n)

    for(iCnt = 1 ; iCnt <= iNo; iCnt ++)
    {
        printf("* ");
    }

    // Time Complexity = O(n)

    for(iCnt = 1 ; iCnt <= iNo; iCnt ++)
    {
        printf(" # ");
    }
    
}

int main ()
{
    int iValue = 0 ;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}