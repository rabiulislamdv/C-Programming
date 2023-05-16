#include<stdio.h>
void fun(int ar[], int sz)
{
if(sz<0) return;
    fun(ar,sz-1);
    printf("%d ", ar[sz]);
    //  fun(ar,sz-1);   // reverse a print korte
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
     fun(ar,sz-1);
return 0;
}