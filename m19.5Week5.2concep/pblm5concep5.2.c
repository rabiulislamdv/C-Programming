#include<stdio.h>
int main()
{
    //  char ch;
    //  int s=0,c=0;
    //  while(scanf("%c", &ch) !=EOF)
    //  {
    //     if(ch>='a' && ch<='z')
    //     {
    //         s++;
    //     }
      
    //     else{
    //         c++;
    //     }
    //  }
    //  printf("small= %d \n Capital = %d\n ", s,c);

char str[1002],i;
   int upper = 0, lower = 0,whitesp=0;
   printf("enter string \n");
   gets(str);
   for (i = 0; i < str[i]!='\0'; i++)
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
         upper++;
      else if (str[i] >= 'a' && str[i] <= 'z')
         lower++;
     
      else if(str[i]==' ')
         whitesp++;
   
   }
   printf("Upper case letters: %d\n",upper);
   printf("lower case letters: %d\n",lower);

   printf("whitespace: %d",whitesp);


return 0;
}