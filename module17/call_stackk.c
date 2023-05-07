#include<stdio.h>

world(){
    printf("World start \n"); //ata  kore hello te fire jay
   
}

hello()
{
    printf("Hello start\n");// print kore nice jay
    world(); // wait kore ,, world a jay
   
}

int main()
{
   
     hello(); //wait kore , hello te jay
     printf(" main End\n"); // ses a ata kore


// world(){
//     printf("World start \n"); // suru kore
//     printf("World End \n"); // ses kore abar hello te jay
// }

// hello()
// {
//     printf("Hello start\n");// print kore nice jay
//     world(); // wait kore ,, world a jay
//     printf("Hello end\n"); // worl theke ase ata print kore,,, then main a jay
// }

// int main()
// {
//     printf("main start\n");
//      hello(); //wait kore , hello te jay
//      printf(" main End\n"); // ses a ata kore

return 0; // return kore function theke ber hoye jay
}