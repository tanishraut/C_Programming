#include <stdio.h>

int sum_of_even_factors(int number)
{
    int i;
    int sum = 0;

// Time Complexity: O(n)


    if (number <= 0)
        return 0;

    for (i = 1; i <= number; i++)
    {
        if (number % i == 0 && (i % 2 == 0) && (i != number))
            sum += i;
    }
    return sum;
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);
    printf("%d\n", sum_of_even_factors(number));
    return 0;
}
