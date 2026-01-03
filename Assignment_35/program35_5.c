#include <stdio.h>


void RevStr( char *str)
{
  int iCnt = 0 ; 
  while(str[iCnt] != '\0')
  {
    iCnt++;
  }

  for(iCnt = iCnt-1 ; iCnt >= 0; iCnt --)
  {
     printf("%c",str[iCnt]);
  }
}


int main()

{
    char Arr[20];
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    RevStr(Arr);
   
    return 0 ;

    
}


