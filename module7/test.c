// #include<stdio.h>
// int main()
// {
//      int n;
//      scanf("%d",&n);
//      for(int i=1; i<=n; i++)
//      {
//         printf("%d ",i);
//      }
// return 0;
// }

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
         for(int i=1; i<=n; i++)
        {
            printf("%d ",i);
        }
       if(n<=0)
        {
            for(int i=n; i<=1; i++)
            {
                printf("%d ", i);
            }
        }
    return 0;
}