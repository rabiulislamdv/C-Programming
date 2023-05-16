#include<stdio.h>
void fun( int num)
{
    if(num==0) return;
 
    fun(num-1);
       printf("%d\n", num);
}
int main()
{
     int num; 
     scanf("%d ",&num);
     fun(num);
return 0;
}