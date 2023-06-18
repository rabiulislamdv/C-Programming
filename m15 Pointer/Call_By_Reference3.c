#include<stdio.h>

void fun(int *p)
{
    *p=300; //dereference kore value change korele s er value change hoy
    printf(" P er value- %p\n",p );
    printf(" P er value- %d\n",*p );
}
int main()
{
     int x=100;
       printf(" x er value- %p\n",&x );
     fun(&x);
return 0;
}