#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
       
     int T= 0, P= 0;
     for(int i = 0; i <=n; i++)
     {
       long long int  x1, x2;
           scanf("%lld %lld", &x1, &x2);
            
                if(x1 > x2){
                    T++;
                }
                else{
                    P++;
                }
            
     }

     if(T > P){
        printf("Tiger");
     }
     else if(T < P){
        printf("Pathan");
     }
     else{
        printf("Draw");
     }
return 0;
}