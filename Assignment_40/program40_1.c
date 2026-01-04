#include <stdio.h>

void Display(int iNo)
{
    static int iCnt = 0; 

    if(iCnt >= iNo)  
        return;

    printf("* ");
    iCnt++;

    Display(iNo);     
}

int main()
{
    int iValue;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
