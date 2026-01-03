#include <stdio.h>
 
int iDiff( char *str)
{
    int iCnt = 0;
    int iCapital = 0 , iSmall = 0 ;
   
    
    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'a' && str[iCnt] <= 'z' )
        {
            iSmall ++ ;
        }

        else if (str[iCnt] >= 'A' && str[iCnt] <= 'Z' )
        {
            iCapital ++ ;
        }

        iCnt++;
        
    }

    return iSmall - iCapital ;
    
}

int main()
{
    char Arr [20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s" , Arr);

    iRet = iDiff( Arr );

    printf("Difference Between Frequencey of Small and Captital Letters : %d ",iRet);

    return 0 ;
}