#include <stdio.h>

int iFact( int iNo)
{
    int iCnt = 0 ;
    int iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
// Constant time O(1)

    for(iCnt = iNo ; iCnt>1 ; iCnt --)
    iMulti = iMulti * iCnt ;
    
    return iMulti ;


}

int main ()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = iFact(iValue);

    printf("Factorial of Number : %d",iRet);
    
    return 0;

}