#include <stdio.h>

void Number(int iNo)
{

//Time Complexity: O(1) — constant time (no loops or recursion)

    if(iNo < 50 )
    printf("Small");

    else if (iNo>50 && iNo<100)
    printf("Medium");

    else 
    printf("Greatest");

}

int main ()
{
    int iValue = 0;

    printf("Enter No : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0 ;
}