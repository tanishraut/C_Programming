#include <stdio.h>

void Display( char ch)
{
    int iCnt = 0 ;

        if(ch >= 'a' && ch <= 'z')
        {
            printf("%c", ch - ('a'-'A'));
        }
        else if ( ch >= 65 && ch <= 90)
        {
             printf("%c", ch + ( 'a' - 'A'));
        }
        else
        {
            printf("%c",ch);
        }
        
    
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    Display( cValue );

    return 0 ;
}