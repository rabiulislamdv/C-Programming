#include<stdio.h>
int main()
{
   char s[1001];
   int capital = 0, small = 0, spaces=0;
 
   gets(s);
   for (int i =0; s[i]!='\0'; i++)
    {
      if (s[i] >= 'A' && s[i] <= 'Z')
         capital++;
      else if (s[i] >= 'a' && s[i] <= 'z')
         small++;
     
      else if(s[i]==' ')
         spaces++;
   
   }
   printf("Capital - %d\n",capital);
   printf("Small - %d\n",small);
   printf("Spaces - %d",spaces);
return 0;
}