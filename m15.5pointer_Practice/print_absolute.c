#include<stdio.h>
int my_abs(int n)
{
       if(n>=0){
        printf("%d",n);
    }
    if(n<0){
        printf("%d",n*(-1));
    }
}

int main(){
    int n;
    scanf("%d",&n);
     my_abs(n);
    return 0;
}