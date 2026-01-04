#include <stdio.h>

int ChkIndx(char *str, char ch)
{
    int iCnt = 0 , iCount = 0;
    int diff = 'a' - 'A'; // tried to make case insensitive

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] == ch || str[iCnt] == ch - diff ||  str[iCnt] == ch + diff)
        {
            return iCnt;
        }
        iCnt++;   
    }
    return -1;
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

    printf("First Occurence of Character '%c' is at Index %d ",cValue,iRet);

    return 0;
}
