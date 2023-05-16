#include<stdio.h>
void fun(int ar[], int sz, int i)
{
if(i==sz) return;
    printf("%d ", ar[i]);
    fun(ar,sz,++i);
}
int main()
{
       int sz; 
     scanf("%d ",&sz);
     int ar[sz];
     for(int i=0; i<sz; i++)
     {
        scanf("%d", &ar[i]);
     }
     fun(ar,sz,0);
return 0;
}