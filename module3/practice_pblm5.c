#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a>=10000 && a<20000)
        {
        printf("She will buy Gucci Bag");
        }
    else if(a>=5000 && a<10000)
        {
            printf("She will buy Levis Bag");
        }
  else if(a>20000)
        {
            printf("She will buy Gucci Bag\nand Levis Bag");
        }
    else
        {
            printf("She will buy somethings");
        }

    return 0;
}