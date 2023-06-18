#include <stdio.h>
int main (){
int arr []={1,2,3,4,5};
int size= sizeof arr/sizeof arr[0];
printf ("%d", arr[size/2]);
return 0;
}