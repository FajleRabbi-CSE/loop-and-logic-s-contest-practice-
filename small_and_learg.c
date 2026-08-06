#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
    }
    int brr[n];
    int left=0,right=n-1;

    for(int i=0;i<n;i++){
        if(i % 2 ==0){
            brr[i]=arr[left++];
        }else{
            brr[i]=arr[right--];
        }
    }
    for(int i=0; i<n; i+= 2){
        int temp = brr[i];
        brr[i] = brr[right--];
        arr[left-1]=temp;
    }
    for(int i=0; i<n; i++){
        printf("%d",brr[i]);
        if(i<n-1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}