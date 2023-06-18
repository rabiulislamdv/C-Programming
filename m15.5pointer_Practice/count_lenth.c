#include<stdio.h>
#include<string.h>
char my_len(char s[],int n)
{
   int count=0;
    int i=0;
    while(s[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
}
int main(){
    char s[1000];
    scanf("%s",s);
     my_len(s,1000);
    return 0;
}