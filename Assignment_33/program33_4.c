#include <stdio.h>
#include <stdbool.h>

bool CheckSmall( char ch )
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = CheckSmall( cValue );

    if(bRet == false)
    {
        printf("%c is Not Small Letter ",cValue);
    }
    else
    {
        printf("%c is Small Letter ",cValue);
    }

    return 0;



}