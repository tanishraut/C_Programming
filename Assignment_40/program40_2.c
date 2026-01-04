#include <stdio.h>

void Display(int iNo)
{
    static int iCnt = 1; 

    if(iCnt > iNo)  
        return;

    printf("%d ",iCnt );
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
