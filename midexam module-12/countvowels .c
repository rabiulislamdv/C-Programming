#include<stdio.h>
#include<string.h>
int main()
{
     char ch[1002];
     scanf("%s",&ch);
     int size=strlen(ch), count=0;
     for(int i=0;i<size; i++)
     {
        if(ch[i]=='a'|| ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u' )
        {
            count++;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
        }
     }
    // char ch;
    // int count;
    // while(scanf("%c", &ch) !=EOF)
    // {
    //     if(ch=='a'||ch=='e' ||ch=='i'|| ch=='o'|| ch=='u' )
    //     {
    //         count++;
    //     }
    // }
     printf("%d",count);
return 0;
}