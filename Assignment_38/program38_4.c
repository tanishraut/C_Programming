#include <stdio.h>

void Upper(char *src, char *dest)
{
    int iCnt = 0, i = 0;
    char Diff = 'a' - 'A';

    while(src[iCnt] != '\0')
    {
        
        if(src[iCnt] >= 'A' && src[iCnt] <= 'Z')
        {
            dest[i] = src[iCnt] + Diff; 
        }
        else
        {
            dest[i] = src[iCnt]; 
        }
        i++;
        iCnt++;
    }

    dest[i] = '\0'; 
}

int main()
{
    char Arr[30] = "Marvellous Python 2";
    char Brr[30];

    Upper(Arr, Brr);  

    printf("%s\n", Brr);

    return 0;
}
