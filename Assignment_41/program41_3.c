#include <stdio.h>

int StrLen(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }

    return 1 + StrLen(str + 1);

}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    iRet = StrLen(Arr);
    printf("Length of String : %d",iRet);
    return 0;
}