#include <stdio.h>

double AreaRectangle( float iNo1 , float iNo2)
{
    double iFormula =  iNo1 * iNo2 ;   // Constant time Complexity = O(1)
    return iFormula;

}

int main ()
{

    float fValue1 = 0.0 ;
    float fValue2 = 0.0 ;
    double dRet = 0.0 ;

    printf("Enter Height : ");
    scanf("%f",&fValue1);

    printf("Enter Width : ");
    scanf("%f",&fValue2);

    dRet = AreaRectangle( fValue1 , fValue2);

    printf("%.3lf",dRet);

    return 0 ;

}