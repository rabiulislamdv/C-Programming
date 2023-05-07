#include<stdio.h>
int div()
{
   int p, q;
   scanf("%d %d", &p,&q);
   int division =p / q;
    return division;
}



int main()
{
    
int s=div();
printf("%d", s);
return 0;
}