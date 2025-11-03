#include <stdio.h>

double SquareMeter( int iNo )
{
    double feet = iNo * 0.0929 ;
    return feet ; 
}

int main()
{
    int iValue = 0 ;
    double dRet = 0.0 ;

    printf("Enter Square Feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%lf",dRet);

    return 0 ;

}