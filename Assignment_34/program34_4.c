#include <stdio.h>
#include <stdbool.h>

bool ChkBool( char ch)
{  
    int iCnt = 0;

    if( (ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126) )
    // without hardcode 
    //if( (ch >= '!'' && ch <= '/') || (ch >= ':' && ch <= '@') || (ch >= '[' && ch <= '`') || (ch >= '{' && ch <= '~') )

    {
        return true ;
    }
    else
    {
        return false;
    }

    
}

int main ()
{
    char cValue = '\0';
    bool cRet = false;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    cRet = ChkBool( cValue);

    if(cRet == true)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0 ;

}