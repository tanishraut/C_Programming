#include <stdio.h>

void print_odd_numbers(int limit)
{
    int i;

// Time Complexity: O(n/2) => O(n)


    if (limit < 1)
    {
        printf("No odd numbers\n");
        return;
    }
    for (i = 1; i <= limit; i += 2)
        printf("%d ", i);
    printf("\n");
}

int main()
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    print_odd_numbers(limit);
    return 0;
}
