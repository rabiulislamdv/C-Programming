#include<stdio.h>
int main()
{
     char ch;
     int sm=0, cap=0;
     while (scanf("%c", &ch) !=EOF)
     {
       if(ch>='a' && ch<='z')
       {
        sm++;
       }
       else{
        cap++;
       }
     }
     printf("%d %d",cap, sm);
return 0;
}