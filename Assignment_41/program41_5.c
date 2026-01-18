#include <stdio.h>
int Product(int iNo)
{
    if(iNo < 10)
    return iNo;

    return iNo % 10 * Product(iNo / 10);
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Product(iValue);

    printf("Product : %d",iRet);

    return 0;
}
