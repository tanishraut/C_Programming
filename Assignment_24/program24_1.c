#include <stdio.h>
#include <stdlib.h>

int Maximum( int Brr[] , int iSize )
{
    int iCnt = 0 , iMax = Brr[0];
    for(iCnt = 1 ; iCnt < iSize ; iCnt ++)
    {
         if( Brr[iCnt] > iMax )
         {
            iMax = Brr[iCnt];
         } 
    }

    return iMax;
}

int main()
{
    int iLength , *Arr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the Size of Array : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(iLength * sizeof(int));
    
    if(NULL == Arr)
    {
        printf("Unable to ALlocate Memory");
        return -1;
    }

    printf("Enter %d Number of Elements in Array : \n",iLength);
    
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Maximum(Arr , iLength);
    printf("Maximum Number in Array : %d ",iRet);

    free(Arr);
    return 0 ;



}