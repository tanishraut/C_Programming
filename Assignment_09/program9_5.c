#include <stdio.h>

int DiffEvOd( int iNo )
{
    int iCnt = 0 ;
    int iFact1 = 1;
    int iFact2 = 1 ;

    if(iNo<0)
    {
        iNo = -iNo;
    }


// Loop runs from iNo down to 1
// Executes (n - 1) times = Time Complexity: O(n)


    for( iCnt = iNo ; iCnt > 1 ; iCnt --)

    if(iCnt % 2 == 0)
    {
        iFact1 = iFact1 * iCnt ;
    
    }
    else
    {
        iFact2 = iFact2 * iCnt ;
    }

    return iFact1-iFact2 ;
}

int main ()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = DiffEvOd(iValue);

    printf("%d",iRet);

    return 0 ;

}