#include <stdio.h>

void Pattern(int iNo)
{
    // Loop runs double because: one number + one star each time
    for(int iCnt = 1 ; iCnt <= iNo * 2 ; iCnt++)
    {
        if(iCnt % 2 == 0)        // even → print star
        {
            printf(" * ");
        }
        else                     // odd → print number
        {
            printf("%d", (iCnt/2) + 1);     //Odd positions → print number sequence
                                            // Formula: (iCnt/2) + 1
                                            // iCnt = 1 → (1/2)+1 = 1
                                            //                      2
                                            //                      3
        }
    }

    /*
    // EASY VERSION (Alternative)
    // input : 5
    // prints: 1 * 2 * 3 * 4 * 5 *
    for(int i = 1; i <= iNo; i++)
    {
        printf("%d * ", i);
    }
    */


/*
Complexity:
loop runs iNo * 2 times = 2n 
loop runs iNo times = O(n) (This is Better Code than written)

*/
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
