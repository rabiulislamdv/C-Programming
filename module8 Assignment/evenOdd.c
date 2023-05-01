#include<stdio.h>
int main()
{
     int N, sumEven=0, sumOdd=0;
     scanf("%d",&N);
     for( int i=0;i<N; i++)
     {
        int V;
        scanf("%d ",&V);
        if(V%2==0)
        {
            sumEven +=V;
        }
        else{
            sumOdd +=V;
        }
     }
     printf("%d %d\n",sumEven, sumOdd);

return 0;
}