#include<stdio.h>
void solve(int arr[],int size){
    if(size<0) return;
   
    printf("%d ",arr[size]);
     solve(arr,size-1);
}
int main(){
    int sz;
    scanf("%d",&sz);
    int arr[sz];
    for(int i=0;i<sz;i++){
        scanf("%d",&arr[i]);
    }
    solve(arr,sz-1);        
              
    return 0;
}