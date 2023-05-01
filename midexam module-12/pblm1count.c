#include<stdio.h>

int main()
{
     int n;
     scanf("%d", &n);
     int ar[1001];
     int evenCount=0, oddCount=0;
     for(int i=0;i<n;i++)
     {
        scanf("%d",&ar[i]);
     }
     for( int i=0; i<n; i++)
     {
        if(ar[i] % 2==0)
        {
            evenCount ++;
        }
        else
        {
            oddCount++;
        }
        
     }
     printf("%d %d",evenCount,oddCount);
     
return 0;
}