#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0 ;
    for(iCnt = iNo/2; iCnt<=iNo; iCnt--)
    {
    if(iNo % iCnt == 0 )
    {
        printf("%d\n",iCnt);
    }
}
}
int main ()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}