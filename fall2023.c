#include<stdio.h>
int main(){
    int N,P;
    scanf("%d %d",&N,&P);
    
    int arr[N];
    for(int i = 0;i < N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<N;i++){
        if(arr[i]==P){
            printf("Senti Aunti Ramva will never be mine\n");
         return 0;
           
        }
    }
     printf("Senti Aunti Ramva is mine\n");
    return 0;
}