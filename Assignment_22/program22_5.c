#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;
    int iCounter = 0;


    for( iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCounter ++ ;
        }

    }

    return iCounter;

}

int main ()
{
    int *ptr = NULL , iLength = 0 , iValue = 0; 
    int iCnt = 0 ;
    int iRet = 0;

    printf("Enter the Size of Array : ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter the number whose frequency you want to find : ");
    scanf("%d",&iValue);



    printf("Enter %d Number of Elements in Array : \n",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Frequency( ptr , iLength , iValue);

    printf("Frequency of the number %d in the array is : %d",iValue,iRet);

    free(ptr);

    return 0 ;
}