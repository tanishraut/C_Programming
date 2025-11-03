#include <stdio.h>

float Percentage(int iNo1 , int iNo2)
{
    float per = (iNo2 * 100.0)/iNo1;
    return per ;
}

int main ()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;
    float fRet = 0.0;

    printf("Enter Total Marks : ");
    scanf("%d",&iValue1);

    printf("Enter Obtained Marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage : %.2f ",fRet);

    return 0 ;

}

