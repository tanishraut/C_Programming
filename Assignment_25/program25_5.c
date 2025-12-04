#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[] , int iLength)
{
    int iCnt = 0;
    printf("Elements Multiples of 11 \n" );
    for(iCnt = 0 ; iCnt < iLength ; iCnt++) 
    {
        
        if(Arr[iCnt] % 11 == 0 )
        
        {
            printf("%d\t",Arr[iCnt]);
        }
        
    }
}

int main()
{
    int *Brr =NULL , iSize = 0 ;
    int iCnt = 0;
    
    printf("Enter Size of Array : ");
    scanf("%d",&iSize);

    Brr = (int *)malloc(iSize * sizeof(int));
    if(NULL == Brr)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }
        printf("Enter %d Elements in Array : \n",iSize);
        for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
        {
            scanf("%d",&Brr[iCnt]);
        }
    

        Display(Brr , iSize);

        free(Brr);
        return 0;
    
}