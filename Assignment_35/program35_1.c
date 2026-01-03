#include <stdio.h>

int CountCapital(char *str )
{
    int iCnt = 0 , iCount = 0;

    while (str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            iCount++;
        }

        iCnt++;
    }


    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("Total Captial Letters in String : %d", iRet);

    return 0 ;
}