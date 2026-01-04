#include <stdio.h>

void Display()
{
    static char cCnt = 'a';
    if(cCnt == 'g')
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