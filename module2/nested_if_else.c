#include<stdio.h>
int main()
{
    int taka;
    scanf("%d",&taka);
    if(taka>=5000){
        printf("cox,s bazar jabo\n");
        
        if(taka>=10000)
        {
            printf("sentmartin jabo\n");
        }
        else
        {
            printf("ferot asbo");
        }
    }
    else{
        printf("kothao jabo na");
    }
        return 0;
}