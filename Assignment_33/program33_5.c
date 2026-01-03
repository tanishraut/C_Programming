#include <stdio.h>

void Display(char ch)
{
    if(ch == 'a' || ch == 'A')
    {
        printf("Exam of Division %c is At 7:00 am\n", ch);
    }
    else if(ch == 'b' || ch == 'B')
    {
        printf("Exam of Division %c is At 8:30 am\n", ch);
    }
    else if(ch == 'c' || ch == 'C')
    {
        printf("Exam of Division %c is At 9:20 am\n", ch);
    }
    else if(ch == 'd' || ch == 'D')
    {
        printf("Exam of Division %c is At 10:30 am\n", ch);
    }
    else
    {
        printf("Division %c does not exist\n", ch);
    }
}

int main()
{
    char cValue;

    printf("Enter your Class Division: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
