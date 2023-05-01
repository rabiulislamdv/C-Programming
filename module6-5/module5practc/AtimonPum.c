#include<stdio.h>
int main()
{
     int a , b;
     scanf("%d %d",&a,&b);
   
     if(a>=0 && b>=0 && a>=b)
    {  int c=a-b;
         printf("%d",c);
    }
    else
    {
        printf("0");
    }
return 0;
}