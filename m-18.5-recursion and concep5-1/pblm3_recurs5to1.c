#include<stdio.h>
void fun( int num)
{
    if(num==0) return;
     if(num==1)  printf("%d", num);
     else   printf("%d ", num);
       fun(num-1);
}
int main()
{
     int num; 
     scanf("%d ",&num);
     fun(num);
return 0;
}