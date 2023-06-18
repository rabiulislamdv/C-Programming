#include<stdio.h>
int main()
{
     int ar[5]={10, 20, 30, 40, 50};
     printf("0th index er address- %p\n", &ar);
    
    //  printf("0th index er address- %p\n", ar);
     printf("0th index er address- %d\n", ar[0]);
     printf("0th index er address- %d\n", *ar);
     // porer value pete avabe kora jay
     printf("1th index er address- %d\n", ar[1]);
     printf("2th index er address- %d\n", *(ar+2));
     printf("2th index er address- %d\n", *(3+ar));
     printf("2th index er address- %d\n", 1[ar]);
     printf("4th index er address- %d\n", *(ar+4));

return 0;
}