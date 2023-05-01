#include <stdio.h>  
   
int main() {  
    int counter, N;    
   
    scanf("%d", &N);  
   
    printf("Printing Numbers form 1 to %d\n", N);  
 
    for(counter = 1; counter <= N; counter++) {  
        printf("%d \n", counter);  
    }
     
    return 0;  
} 