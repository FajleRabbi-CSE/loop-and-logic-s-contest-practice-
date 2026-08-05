#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
    int N,id;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d %d",&id,&arr[i]);
    }
    int sum=0;
    sort(arr,arr+N);
    for(int i=0;i<3;i++){
        sum=sum+arr[i];
    }
    if( sum < 150)
         printf("Counseling Support Required\n");
    else
          printf("Counseling Support Not Required %d %d %d\n",arr[0],arr[1],arr[2]);

}