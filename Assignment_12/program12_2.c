#include <stdio.h>

int count_factors(int number)
{
    int i;
    int count = 0;

// Time Complexity: O(n)

    if (number <= 0)
        return 0;

    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
            count++;
    }
    return count;
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);
    printf("%d\n", count_factors(number));

    return 0;
}
