#include <stdio.h>
#include <stdbool.h>

bool Vowels( char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt]=='a' || str[iCnt]=='e' || str[iCnt]=='i' || str[iCnt]=='o' || str[iCnt]=='u' 
        || str[iCnt]=='A' || str[iCnt]=='E' || str[iCnt]=='I' || str[iCnt]=='O' || str[iCnt]=='U' )
        {
            return true ;
        }

        iCnt ++;
    }

    return false;
}



int main()

{
    char Arr[20];
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    bRet = Vowels(Arr);

    if(bRet == false)
    {
        printf("FALSE");
    }
    else
    {
        printf("TRUE");
    }

    return 0 ;


    
}


