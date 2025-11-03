#include <stdio.h>

int iFact( int iNo )
{
    int iCnt = 0 ;
    int iFact = 1 ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }    

    for(iCnt = iNo ; iCnt > 1 ; iCnt--)  // Time Complexity O(n)
    if(iCnt%2 != 0)

    {
        iFact = iFact * iCnt ;

    }

    return iFact ;

    
}

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = iFact(iValue);

    printf("%d",iRet);

    return 0 ;

}

