#include <stdio.h>
#include <stdbool.h>

bool CheckAlpha( char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }

    return false;
}



int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == false)
    {
        printf("%c is Not Alphabet ",cValue);
    }
    else 
    {
        printf("%c is Alphabet ",cValue);
    }

    return 0 ;



}