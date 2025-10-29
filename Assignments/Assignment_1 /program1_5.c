//Assignment Error 

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
//Question says to take input from user,but in 
//assignment there was fixed value so i changed it to 
//user input

{
   int iValue = 0;
   printf("Enter No :");
   scanf("%d",&iValue);
   Accept(iValue);
   return 0 ;
    
}
