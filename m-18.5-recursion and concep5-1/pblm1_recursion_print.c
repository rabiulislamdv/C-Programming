#include<stdio.h>
void fun(num)
{
    if(num==0) return;
    printf("I love Recursion\n");
    fun(num-1);
}
int main()
{
     int num; 
     scanf("%d",&num);
     fun(num);
return 0;
}