#include <stdio.h>

void NoSpc(char *src, char *dest)
{
    int iCnt = 0, i = 0;

    while(src[iCnt] != '\0')
    {
        if(src[iCnt] != ' ')
        {
            dest[i] = src[iCnt];
            i++;
            
        }
        iCnt++;
    }

    dest[i] = '\0';

}

int main()
{
    char Arr[30] = "Marvel lous Pyth on";
    char Brr[30];

    NoSpc(Arr, Brr);

    printf("%s", Brr);

    return 0;
}
