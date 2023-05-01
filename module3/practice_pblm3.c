#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a>=0){
     
        if(a%2==0){
            printf(" The number is Even");

        }
        else{
            printf("The number is odd");
        }
    }
    else{
        printf(" please enter non negative number");
    }
  
}