#include<stdio.h>
int main()
{
     int a ,b;
     scanf("%d%d",&a,&b);
     if(a % b==0)
     {
        printf("Multpls\n");
     }
     else if(b % a==0)
     {
        printf("Multipls \n");
     }
     else{
        printf("No Multipls");
     }
return 0;
}