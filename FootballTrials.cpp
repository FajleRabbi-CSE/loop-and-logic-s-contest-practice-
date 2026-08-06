#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&brr[i]);
    }
    int c[n];
    int k = 0;
    
    for(int i=0; i<n;i++){
        if(brr[i]==0)
        {
            c[k]=arr[i];
            k++;
        }
    }
    sort(c,c+k);
     for (int i = 0; i < k; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}