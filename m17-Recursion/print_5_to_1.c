#include<stdio.h>
void fun(int i) //i=1
{
    if(i==0) return; // base case bole ,, loop thamabe
    printf("%d\n",i);
    fun(i-1);  // i-1-> 5-1=4 ; fun( a jabe int i-> a 4 bosabe then 2 print korbe)
}

int main()
{
     fun(5);
return 0;
}