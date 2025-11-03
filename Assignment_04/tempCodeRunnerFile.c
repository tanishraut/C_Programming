#include <stdio.h>
int iSumm( int iNo)
{

int iCnt = 0;
for(iCnt = 1 ; iCnt < iNo ; iCnt )
{
    if(iNo%iCnt== 0);
    printf("%d",iCnt);
}
return iCnt ;
}
int main ()
{
    int iValue = 0;
    int iRet = 0 ;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = iSumm(iValue);
    printf("%d",iRet);
    
}