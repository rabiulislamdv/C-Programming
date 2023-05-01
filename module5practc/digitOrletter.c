#include<stdio.h>
int main()
{
     char N;
     scanf("%c",&N);
     if(N>='0' && N<='9')
        {
            printf("IS DIGIT");
        }
    else
    {
        printf("ALPHA\n");
        if(N>='a' && N<='z')
        {

            printf("IS SMALL\n");
            int ans=N-32;
            printf("Convert Capital:%c",ans);
        }
        else
        {
            
            printf("IS CAPITAT\n");
            int ans=N+32;
              printf("Convert small:%c",ans);
        }
    }
return 0;
}