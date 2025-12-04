#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check(int Arr[] ,int iSize , int iNo)
{
    int iCnt = 0 ;
    for ( iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        if (Arr[iCnt] == iNo)
        {
        return true ;
        }
        
    }
    return false;

}

int main ()
{
    int *ptr = NULL , iLength = 0 , iValue = 0;
    int iCnt = 0;
    bool bRet = false;

    printf("Enter the Size of Array : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if( NULL == ptr )
    {
        printf("Unable to Allocate Memory");
        return -1 ;
    }

    printf("Enter the number you want to check : ");
    scanf("%d",&iValue);

    printf("Enter %d Number of Elements in Array : \n",iLength);
    for (iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check( ptr , iLength , iValue);
    if( bRet == true)
    {
        printf("%d is Present in Array" , iValue);
    }
    else
    {
        printf("%d is Not Present in Array \n",iValue);
    }

    free(ptr);
    return 0 ;





}

