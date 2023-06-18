#include<stdio.h>
int fun(int n)
{
      for(int i=1; i<=n; i++)
     {
        printf("%d ",i);
     }
}
int main()
{
    int n;
    scanf("%d", &n);
  
   fun(n);

return 0;
}