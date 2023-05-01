#include<stdio.h>
int main()
{
     int a , b;
    int sum , sub, multi;
    
    float div;
    scanf("%d  %d", &a , &b);
    sum= a + b;
    sub= a - b;
    multi= a * b;
    div= a / b;
    printf("5+2 = %d  \n",sum );
    printf("5-2 = %d  \n",sub );
    printf("5*2 = %d  \n",multi );
    printf("5/2 = %0.2lf  \n",div );

    return 0;
}

