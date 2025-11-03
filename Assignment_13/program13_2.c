#include <stdio.h>

void print_even_numbers(int limit)
{
    int i;

// Time Complexity: O(n/2) = O(n)

    if (limit < 2)
    {
        printf("No even numbers\n");
        return;
    }
    for (i = 2; i <= limit; i += 2)
        printf("%d ", i);
    printf("\n");
}

int main()
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    print_even_numbers(limit);
    return 0;
}
