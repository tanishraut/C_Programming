#include <stdio.h>
#include <stdlib.h>

void Display( int Arr[] , int iSize , int iNo1 , int iNo2)
{
    int iCnt  = 0 ;

    for ( iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        if ( iNo1 <= Arr[iCnt] && iNo2 >= Arr[iCnt])
        {
            printf("%d\t",Arr[iCnt]);
        }
       
    }
}


int main ()
{
    int *ptr = NULL , iLength = 0 , iValue1 = 0 , iValue2 = 0;
    int iCnt = 0 ;

    printf("Enter the Size of Array : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (NULL == ptr)
    {
        printf("Unable to Allocate Memory");
        return -1 ;
    }

    printf("Enter the Start Point : ");
    scanf("%d",&iValue1);

     printf("Enter the End Point : ");
    scanf("%d",&iValue2);

    printf("Enter %d Numbers of Elements : \n",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display( ptr , iLength , iValue1 , iValue2);

    

    free(ptr);

    return 0 ;
}