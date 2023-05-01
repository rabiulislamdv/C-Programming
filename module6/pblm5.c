#include<stdio.h>
int main()
{
//      int n,k;
//      scanf("%d%d",&n, &k);
//      for(int i=1;i<=k; i++)
//      {
//         printf(" \n");
//         for(int i=1; i<=n; i++)
//         {
//             printf("%d ",i);
//         }
//      }
    int n, p;
    scanf("%d%d",&n,&p);
    for(int i=1; i<=p; i++)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
         printf("\n");
    }

return 0;
}