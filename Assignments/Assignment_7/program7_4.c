#include <stdio.h>

void DisplayOdd( int iNo )
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d ",iCnt);
        }
        else{
        
        }
        
    }

}

int main ()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayOdd(iValue);

    return 0 ;
}