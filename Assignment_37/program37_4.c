#include <stdio.h>

int ChkIndx(char *str, char ch)
{
    int iCnt = 0;
    int iLast = -1;
    int diff = 'a' - 'A'; // case insensitive 

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] == ch || str[iCnt] == ch - diff || str[iCnt] == ch + diff)
        {
            iLast = iCnt;   
        }
        iCnt++;
    }
    return iLast;
}

int main()
{
    char Arr[20], cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", Arr);

    printf("Enter the letter you want to check : ");
    scanf(" %c", &cValue);

    iRet = ChkIndx(Arr, cValue);

    if (iRet == -1)
        printf("Character '%c' not found", cValue);
    else
        printf("Last Occurrence of Character '%c' is at Index %d", cValue, iRet);

    return 0;
}
