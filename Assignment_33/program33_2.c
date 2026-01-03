#include <stdio.h>
#include <stdbool.h>

bool CheckCapital( char ch )
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return true;
    }

    return false;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character : ");
    scanf("%c",&cValue);

    bRet = CheckCapital( cValue );

    if(bRet == false)
    {
        printf("%c is Not Captial Letter ",cValue);
    }
    else
    {
        printf("%c is Capital Letter ",cValue);
    }

    return 0;



}