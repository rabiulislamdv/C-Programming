#include<stdio.h>
int main()
{
     int N,K;
     scanf("%d %d",&N, &K);
      
         for(int i=1; i<=K; i++)
         {
            if(K<=100)
            {
                printf("\n");
            }
          
            for(int i=1; i<=N; i++)
            {
                printf("%d ",i);
            }
         }

return 0;
}