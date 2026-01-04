#include <stdio.h>

void Display(int iNo)
{
    static int iCnt = 0; 

    if(iCnt + iNo < 1)  
        return;

    printf("%d ",iCnt + iNo );
    iCnt--;

    Display(iNo);     
}


int main()
{
    int iValue;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    Display(iValue);

    printf("\n");  
    return 0;
}
