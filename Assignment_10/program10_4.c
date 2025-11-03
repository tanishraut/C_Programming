#include <stdio.h>
double DegreeCelsius( float iNo)
{   
    float fConvert = 0;
    fConvert = (iNo-32) * (5.0/9.0);  // // Constant time Complexity = O(1)
    return fConvert ;
}

int main ()
{
    float fValue = 0.0;
    double fRet = 0.0;

    printf("Enter Fahrenheit : ");
    scanf("%f",&fValue);

    fRet = DegreeCelsius(fValue);

    printf("%.2lf Degree Celsius",fRet);

    return 0 ;


}