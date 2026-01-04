#include <stdio.h>

void ReverseString(char *str)
{
    int iCnt = 0 , i = 0;

    while (str[iCnt] != '\0')
        iCnt++;

    for (i = iCnt - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char Arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s", Arr);

    printf("Reversed String: ");
    ReverseString(Arr);

    return 0;
}
