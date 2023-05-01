#include<stdio.h>
int main()
{
      int n;
  scanf("%d",&n);
  int ar[n];
  for( int i=0; i<n; i++)
  {
   scanf("%d ", &ar[i]);
  }
  int X;
  scanf("%d",&X);
int ans=-1;
  for(int i=0; i<n; i++)
  {
    if(X==ar[i])
     {
        ans=i;
        break;
     }
  }
  printf("%d\n",ans);
 
return 0;
}