#include <stdio.h>

void Display()
{
    static char cCnt = 'A';
    if(cCnt == 'G')
    return ;

    printf("%c ",cCnt);
    cCnt++;

    Display();
}

int main()
{
    Display();

    return 0 ;
}