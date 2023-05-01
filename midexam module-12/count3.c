#include<stdio.h>
#include<string.h>
int main()
{
     int ar[26]={0};
    char ch;
    while (scanf("%c", &ch) !=EOF)

    {
       ar[ch -'a']++;
    }
    for(char i= 'a'; i <= 'z'; i++)
    {
       
        printf("%c - %d \n", i, ar[i-'a']);
        
    }
    
return 0;
}