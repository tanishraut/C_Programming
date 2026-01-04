#include <stdio.h>

void DigitsOnly(char *str)
{
    int iCnt = 0;
    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= '0' && str[iCnt] <= '9')
        {
            printf("%c",str[iCnt]);
        }

        iCnt ++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    DigitsOnly(Arr);

    return 0 ;
}