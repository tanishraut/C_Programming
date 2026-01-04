#include <stdio.h>

void Display()
{
    static int iCnt = 1 ;
    if(iCnt > 5 )
    return ;

    printf("%d ",iCnt);
    iCnt ++ ;

    Display();

}

int main ()
{
    Display();

    return 0 ;

}