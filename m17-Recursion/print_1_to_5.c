#include<stdio.h>
void fun(int i) //i=1
{
    if(i==6) return; // base case bole ,, loop thamabe
    printf("%d\n",i);
    fun(i+1);  // i+1-> 1+1=2 ; fun( a jabe int i-> a 2 bosabe then 2 print korbe)
}

int main()
{
     fun(1);
return 0;
}