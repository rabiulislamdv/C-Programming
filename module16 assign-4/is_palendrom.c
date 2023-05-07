#include<stdio.h>
#include<string.h>
void is_palindrome( char str[])
{
    int fst=0;
    int lst=strlen(str)-1;
    while(lst > fst)
    {
        if(str[fst++] != str[lst--])
        {
            printf("Not Palindrome \n");
        return;
        }        
    }
          printf("Palindrome \n");
}
 
int main()
{
     char *str;
     scanf("%s",&str);
    is_palindrome(&str);
return 0;
}