#include <stdio.h>

void print_numbers(int limit)
{
    int i;

// Time Complexity: O(n)

    if (limit < 1)
    {
        printf("No numbers to print\n");
        return;
    }
    for (i = 1; i <= limit; i++)
        printf("%d ", i);
    printf("\n");
}

int main()
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    print_numbers(limit);
    return 0;
}
