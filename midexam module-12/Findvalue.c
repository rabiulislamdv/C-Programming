#include<stdio.h>
int main()
{
      int n;
     scanf("%d", &n);
     int ar[n];
     for(int i=0;i<n; i++)
     {
        scanf("%d", &ar[i]);
     }
     int v,flag=0;
     scanf("%d",&v);
     
     for(int i=0; i<n;i++)
     {
        if(ar[i]==v)
        {
            flag++;
            
        }
     }
     printf("%d",flag);
return 0;
}