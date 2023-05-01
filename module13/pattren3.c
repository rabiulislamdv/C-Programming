#include<stdio.h>
int main()
{
    //  int n;
    //  scanf("%d",&n);
    //  int k=1;
    //  for(int i=1; i<=n; i++)
    //  {
    //     for(int j=1; j<=k; j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     k++;
    //     printf("\n");
    //  }

    //  int n;
    //  scanf("%d",&n);
    //  int k=n;
    //  for(int i=n; i>=1; i--)
    //  {
    //     for(int j=k; j>=1; j--)
    //     {
    //         printf("%d ",j);
    //     }
    //     k--;
    //     printf("\n");
    //  }

    
    int n;
     scanf("%d",&n);
     int k=n;
     for(int i=n; i>=1; i--)
     {
        for(int j=1; j<=k; j++)
        {
            printf("%d ",j);
        }
        k--;
        printf("\n");
     }
return 0;
}