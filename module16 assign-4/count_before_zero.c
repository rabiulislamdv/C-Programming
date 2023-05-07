#include<stdio.h>
void count_before_zero( int ar[] , int n)
{

   int ar[1000], n;
   
  scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }

	int i,count=0;
    int sz = strlen(ar);
     for(i=0; i<n; i++)
    {
         
        if(ar[i] < 0)
        {
           count++;
        }
    }
 	return count;

}


int main()
{
  int s = count_before_zero();
  

    printf("%d",s) ;
    return 0;
}