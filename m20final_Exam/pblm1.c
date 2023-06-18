#include<stdio.h>
int main()
{
     int t;
     scanf("%d",&t);
     for(int i=1;i<=t; i++)
     {
        int s,a,b,c;
        scanf("%d %d %d %d", &s, &a, &b, &c);
        printf("%d ", s-(a+b+c));
        printf("\n");
     }
     
return 0;
}