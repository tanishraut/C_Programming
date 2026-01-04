#include <stdio.h>

void Convert(char *str)
{
    int iCnt = 0 ;
    int diff = 'a'-'A'; 

   while (str[iCnt] != '\0')
   {
    if (str[iCnt] >= 'a' && str[iCnt] <= 'z')
    {
        str[iCnt] = str[iCnt] - diff;
    }  

    else if (str[iCnt] >= 'A' && str[iCnt] <= 'Z')
    {
        str[iCnt] = str[iCnt] + diff;
    }

    printf("%c",str[iCnt]);
    iCnt++;

    }

}

int main()
{
    char Arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    Convert(Arr);

    return 0 ;
}