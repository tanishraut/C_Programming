#include <stdio.h>
#include <stdbool.h>

int Find(int iNo1 , int iNo2)
{
    if (iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
        
}
int main ()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;
    int gr8 = 0 ;

    printf("Enter Num1 : ");
    scanf("%d",&iValue1);

    printf("Enter Num2 : ");
    scanf("%d",&iValue2);

    gr8 = Find(iValue1 , iValue2);
    printf("%d",gr8);

    return 0;

}
