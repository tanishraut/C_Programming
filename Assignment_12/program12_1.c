#include <stdio.h>

void print_factors(int number)
{
    int i;

// Time Complexity: O(n) Time counsuming

    if (number <= 0)
    {
        printf("Please enter a positive number\n");
        return;
    }

    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);
    print_factors(number);

    return 0;
}