#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    long long arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    long long flag=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            flag +=(arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    }
    printf("%lld\n",flag);
    return 0;
}