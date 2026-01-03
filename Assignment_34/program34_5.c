#include <stdio.h>

void DisplayASCII( char ch )
{
    int iCnt = 0;

    if(ch <=255)
    {
        printf(" Decimal :\t %d \n Hexadecimal :\t 0X%x \n Octal :\t 0%o ", ch , ch , ch );
    }
}

int main ()
{
    int cValue = '\0';
    
    printf("Enter the Character : ");
    scanf("%c",&cValue);

    DisplayASCII(cValue);

    return 0 ;
}
