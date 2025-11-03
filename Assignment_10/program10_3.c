#include <stdio.h>

int Km2Mtr( float iNo)
{
    float Mtr = iNo * 1000;   // Constant Time Complexity = O(1)
    return Mtr;
}

int main ()
{
    float fValue = 0.0 ;
    int iRet = 0 ;

    printf("Enter Kilometer : ");
    scanf("%f",&fValue);

    iRet = Km2Mtr(fValue);

    printf("Meters : %d",iRet);

    return 0 ;

}