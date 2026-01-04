#include <stdio.h>

void Display(int iNo)
{
    static char cCnt = 'A'; 

    if(iNo <= 0)   
        return;

    printf("%c ", cCnt);
    cCnt++;
    iNo -- ;

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
