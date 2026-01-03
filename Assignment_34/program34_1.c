#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt <=255 ; iCnt++ )
    {
        printf("|| Character : %c || Decimal : %d || Hexadecimal : %x || Octal : %o ||\n", iCnt , iCnt , iCnt , iCnt );
    }
}

int main ()
{
    DisplayASCII();
    return 0 ;
}
