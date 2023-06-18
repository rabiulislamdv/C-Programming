#include<stdio.h>
int main()
{
     int a;
     scanf("%d", &a);
     int e=0, o=0,t_f=0;
     for(int i=0; i<a ; i++)
     {
        int b;
        scanf("%d",&b);
        if(b%2==0)
        {
            e++;
        }
        else if(b%3==0 && b%5==0)
        {
            t_f ++;
        }
        else{
            o++;
        }
     }
     printf("Even:%d \n Odd: %d \n T_f : %d \n", e,o,t_f);
return 0;
}