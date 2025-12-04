#include <stdio.h>
#include <stdlib.h>


int Product(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iProduct = 1 , OddFound = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            OddFound = 1 ;
            iProduct = iProduct * Arr[iCnt];
            
            
        }    

    }

    if (OddFound == 0)
    {
        return 0 ;
    }

    return iProduct;
}


int main ()
{
    int *ptr = NULL , iLength = 0 , iValue = 0;
    int iCnt = 0 ;
    int iRet = 0;

    printf("Enter the Size of Array : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (NULL == ptr)
    {
        printf("Unable to Allocate Memory");
        return -1 ;
    }

    printf("Enter %d Numbers of Elements : \n",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Product( ptr , iLength);
    printf("Product of all odd elements in Array is: %d", iRet);
    

    free(ptr);

    return 0 ;
}