#include<stdio.h>
#include<string.h>
int main()
{
    //  char  a[18];
    //  gets(a);
    //  printf("%s",a);
// size ja thake tai ney// null ('\0') soho print kore dey
    char  a[18];
    fgets (a, 10,stdin);
    printf("%s",a);
    
return 0;
}