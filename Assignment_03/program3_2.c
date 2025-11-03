#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int iFac = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iFac = 1; iFac <= iNo; iFac++)
    {
        // include 1 as well as even factors
        if((iNo % iFac == 0) && (iFac == 1 || iFac % 2 == 0))
        {
            printf("%d\n", iFac);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);
    DisplayEvenFactor(iValue);
    return 0;
}
