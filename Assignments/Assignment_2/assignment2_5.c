#include <stdio.h>
#include <stdbool.h>

bool ChkEven(int iNo)
{
    if(iNo%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false ;
    printf("Enter Number : ");
    scanf("%d",&iValue);
   bRet = ChkEven(iValue);
    
   if(bRet == true)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}
