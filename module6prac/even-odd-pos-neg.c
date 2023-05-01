#include<stdio.h>
int main()
{
     int n;
    scanf("%d",&n);
    int a;
    int evn=0,odd=0,pos=0,neg=0;
    for( int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            evn++; 
            
        }
        else{
           odd++;
        }
        if(a>0)
        {
            pos++; 
            
        }
        else if(a<0)
        {
            neg++;
        }
    }
    printf("Even: %d\n %d\n %d\n %d\n",evn, odd, pos, neg);
return 0;
}
