#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = - iNo;
    }

// Time Complexity O(1) loop runs exact 10 times

    for(iCnt = 1 ; iCnt<=10; iCnt++)
    {
        printf("%d ", iCnt * iNo);
    }

}
int main ()
{
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0 ;
}