#include<stdio.h>
int main()
{
     int x=100;
     int *ptr=&x;
     // x er value change
     x=200;
    //  *ptr =200;
    //  printf("x er address: %p\n", &x);
    //  printf("ptr er value: %p\n", ptr);
     printf("x er value: %d\n", x);
     printf("ptr er value: %d\n", *ptr);
    //  printf("ptr er memory size: %d\n", sizeof(ptr));

     // pointer er address alada hoy 
     printf("ptr er address: %p\n", &ptr); 


return 0;
}