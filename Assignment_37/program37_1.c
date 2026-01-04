#include <stdio.h>
#include <stdbool.h>

bool ChkChar(char *str, char ch)
{
    int iCnt = 0;
    int diff = 'a' - 'A'; // tried to make case insensitive

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] == ch || str[iCnt] == ch - diff)
        {
            return true;
        }
        iCnt++;   
    }
    return false;
}

int main()
{
    char Arr[20], cValue;
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n']s", Arr);

    printf("Enter the letter you want to check : ");
    scanf(" %c", &cValue);   

    bRet = ChkChar(Arr, cValue);

    if (bRet == false)
    {
        printf("False (Not Present)");
    }
    else
    {
        printf("True (Present)");
    }

    return 0;
}
