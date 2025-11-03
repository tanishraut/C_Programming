/*
The provided test case that shows output "2 6 12 18" for input 36 is incorrect from given question
correct even factors of 36 are: 2, 4, 6, 12, 18, 36.
*/

#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;   
    }

    for(i = 1; i <= iNo; i++)   
    {
        if((iNo % i == 0) && (i % 2 == 0)) 
        {
            printf("%d\n", i);   
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}