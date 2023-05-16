#include<stdio.h>
int main()
{
     // declare 2d array
    //  int a[5][3];
    //  for(int i=0; i<5; i++)
    //  {
    //     // printf("%d\n", i);
    //    for(int j=0; j<3; j++)
    //    {
    //     //  printf("%d %d\n", i,j);
    //       printf("a[%d][%d] ", i,j);
    //    }
    //    printf("\n");
    //  }

// input nite
 int a[5][3];
  for(int i=0; i<5; i++)
     {
        // printf("%d\n", i);
       for(int j=0; j<3; j++)
       {
        //  printf("%d %d\n", i,j);
          scanf("%d",&a[i][j]);
       }
     }
       for(int i=0; i<5; i++)
     {
        // printf("%d\n", i);
       for(int j=0; j<3; j++)
       {
        //  printf("%d %d\n", i,j);
          printf("%d ",a[i][j]);
       }
       printf("\n");
     }

return 0;
}