#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("Enter a number :%d\n ", a);
    if (a>=0)
    {
        printf(" Number is positive ");
    }
    else if (a==0)
    {
        printf("Number is Zero");
    }
    else{
        printf("Number is Negative");
    }
    
}