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
//Question says to take input from user
//But Assignment has Fixed value printed

{
int iValue = 0;    
     iValue = 5;

   Accept(iValue);
   return 0 ;
    
}
