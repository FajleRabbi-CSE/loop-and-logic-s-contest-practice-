#include<stdio.h>

int main()
{ 
    int N;
    int arr[100];
    int flag = 1;
   
    scanf("%d",&N);

    for(int i=0; i < N; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 1; i < N; i++){
        if(arr[i]<arr[i-1]){
            flag = 0;
            break;
        }
    }
        if(flag == 1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    return 0;
} 