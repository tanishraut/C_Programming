#include <stdio.h>

void RevStr(char *src, char *dest)
{
    int iCnt = 0, i = 0;

    while(src[iCnt] != '\0')
    {
        iCnt++;
    }

    for(i = 0; i < iCnt; i++)
    {
        dest[i] = src[iCnt - 1 - i];
    }

    dest[i] = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];

    RevStr(Arr, Brr);

    printf("%s", Brr);

    return 0;
}
