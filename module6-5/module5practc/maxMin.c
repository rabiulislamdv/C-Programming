#include<stdio.h>
int main()
{
     char n;
     scanf("%c",&n);
     if(n =='z'){
        printf("a");
     }
     else if(n>='a' && n<='z')
     {
       int ans=n+1;
        printf("%c",ans);
     }
return 0;
}