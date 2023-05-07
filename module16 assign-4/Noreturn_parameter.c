#include<stdio.h>
int remain(int p, int q)
{
  
   int rem = p % q;
   printf("%d", rem);
}

int main()
{
    
int p, q;
scanf("%d %d", &p,&q);
remain(p, q);

return 0;
}