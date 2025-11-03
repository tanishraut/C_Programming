#include <stdio.h>
void Display()
{
    int i = 0;
    i = 5;
        while(i>1)
        {
            printf("%d\n",i);
            i --; // not possible to print 5 to 1 with i ++ ig
        }

    {
        printf("%d\n",i);

    }
}
int main()
{
    Display();
    return 0;
}