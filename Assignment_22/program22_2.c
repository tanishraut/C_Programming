#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[] ,int iSize)
{
    int iCnt = 0;
    int iCountEven = 0 , iCountOdd = 0;
    int iDifference = 0;

    for( iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCountEven ++ ;
        }
        else
        {
            iCountOdd ++ ;
        }
    }

    iDifference = iCountEven - iCountOdd;
    return iDifference ;


}

int main ()
{
    int *ptr = NULL , iLength = 0;
    int iCnt = 0;
    int iRet = 0 ;

    printf("Enter Length of Array : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to Allocate Memory");
        return -1 ;
    }

    printf("Enter %d Elements \n",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency( ptr , iLength);
    printf("Difference Between Even and Odd count is %d", iRet);


    free(ptr);
    return 0 ;

}