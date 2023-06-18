#include<stdio.h>
void fun(int x)
{
    x=200;
 printf("fun x er address: %p\n", &x);
 printf("fun x er value: %d\n", x);

}
int main()
{
     int x=10;
     printf("main x er address: %p\n", &x);
     printf("main x er value: %d\n \n", x);
    fun(x);
return 0;
}