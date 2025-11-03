#include <stdio.h>
#include <ctype.h>  

void DisplayConvert(char CValue)
{
    if (isupper(CValue))           // checks if it's uppercase
    {
        printf("%c", tolower(CValue));   // convert to lowercase
    }
    else if (islower(CValue))      // checks if it's lowercase
    {
        printf("%c", toupper(CValue));   // convert to uppercase
    }
   
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}