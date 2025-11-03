#include <stdio.h>

int sum_even_numbers(int limit)
{

// Time Complexity: O(1)

    if (limit <= 0)
        return 0;

    return limit * (limit + 1);
}

int main(void)
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    printf("%d\n", sum_even_numbers(limit));
    return 0;
}
