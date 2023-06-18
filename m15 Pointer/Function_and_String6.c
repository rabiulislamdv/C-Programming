#include<stdio.h>
void fun(char ar[])
{
//  int sz =sizeof(ar)/sizeof(char);
    //  printf("%d", sz);
    printf("%d",strlen(ar));
}
int main()
{
     char ar[20]="hello";
    fun(ar);
return 0;
}