#include <stdio.h>

double AreaCircle( float iNo)
{
    float ACir = 3.14 * iNo * iNo ;      // Time Complexity = O(1)
    return ACir ;
}

int main ()
{
    float fValue = 0;
    double dRet = 0.0;

    printf("Radius Of Circle : ");
    scanf("%f",&fValue);

    dRet = AreaCircle(fValue);

    printf("%.4lf",dRet);

    return 0 ;


}