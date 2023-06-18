#include<stdio.h>
#include<string.h>
int main()
{
     int a;
     scanf("%d",&a);
     int al= 0, bd= 0;
     for(int i = 0; i <= a; i++){
        char c, d;
        scanf("%c %c", &c, &d);
        if(c > d){
            al++;
        }
        else{
            bd++;
        }
     }
     if(al > bd){
        printf("Alisha Winner");
     }

    else if(al < bd){
        printf("Bidisha winner");
     }
     else{
        printf("Tie");
     }
return 0;
}
// input

// 5
// A B 
// a D 
// D E 
// z Q 
// A B 