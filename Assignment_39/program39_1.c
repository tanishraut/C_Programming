#include <stdio.h>
void Display()
{
    static int iCnt = 0 ;
    if(iCnt == 5)
    return;

    printf("* ");
    iCnt ++;
    Display();

}

int main ()
{
    Display();

    return 0 ;
}
