#include <stdio.h>

int CharCnt(char *str, char ch)
{
    int iCnt = 0 , iCount = 0;
    int diff = 'a' - 'A'; // tried to make case insensitive

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] == ch || str[iCnt] == ch - diff ||  str[iCnt] == ch + diff)
        {
            iCount ++ ;
        }
        iCnt++;   
    }
    return iCount;
}

int main()
{
    char Arr[20], cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", Arr);

    printf("Enter the letter you want to check : ");
    scanf(" %c", &cValue);   

    iRet = CharCnt(Arr, cValue);

    printf("Frequency of Character '%c' is %d ",cValue,iRet);

    return 0;
}
