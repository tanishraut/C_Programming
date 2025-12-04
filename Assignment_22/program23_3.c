#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool Check(int Arr[] , int iSize)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
    
        }
    }
    return false;
}

int main ()
{
    int *ptr = NULL , iLength = 0 ;
    int iCnt;
    bool bRet = false;

    printf("Enter Size of Array : ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements \n",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr , iLength);
    if(bRet == true)
    {
        printf("11 is Available");
    }
    else
    {
        printf("11 is Not Available");
    }


    free(ptr);
    return 0 ;

}