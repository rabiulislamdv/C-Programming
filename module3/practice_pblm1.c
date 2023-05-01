#include<stdio.h>
int main()
{
    // 1st pblm code 
//     printf("Hello, world! I am learning C programming language. ^_^\n"); 
// printf("Programming is fun and challenging. /\\/\\/\\ \n");
// printf("I want to give my 100%% dedication to learn!\tI will succeed one day.");
  // ************

  // 2nd pblm
  
//   long long int A , B, multiplyResult;
 
//     scanf("%lld%lld",&A, &B);
//     multiplyResult = A * B;
//     printf(" %lld", multiplyResult);
//*******

//**** 3rd pblm

    // int N;
    // scanf("%d",&N);
    // if(N%3==0)
    // {
    //     printf("YES");
    // }
    // else
    // {
    //     printf("NO");
    // }
//******** 4th pblm

// int i, N;
// scanf("%d",&N);
// for(i=1; i<=N;i++)
// {
//     if(i%3==0 && i%7==0)
//     {
//         printf("%d\n",i);
//     }
// }
//********* 5th pblm
     int givenMoney, restMoney;
    scanf("%d", &givenMoney);
  
restMoney=givenMoney-1000;

   if(givenMoney>=1500)
    {
        if(restMoney>=500)
        {
              printf("I will buy new Punjabi\n");
             printf("I will buy new shoes \n");
        
        
             printf("Alisa will buy new shoes");
         
        }
    }
    else if(givenMoney>1000 && givenMoney<1500)
    {
        printf("I will buy Punjabi");
    }
 
     
    else{
        printf("Bad luck!");
    }
return 0; 

}