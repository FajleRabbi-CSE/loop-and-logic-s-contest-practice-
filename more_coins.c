#include<stdio.h>
#define INF 100000000
int main(){
    int N,V;
    scanf("%d %d",&N,&V);

    int coins[N];
    for(int i = 0; i<N; i++){
        scanf("%d",&coins[i]);
    }
    int dp[V+1];
    dp[0]=0;
    for(int i=1; i<=V; i++){
        dp[i]=INF;
    }
    for(int i =1; i<=V;i++){
        for(int j=0;j<N;j++){
            if(coins[j]<=i){
                if(dp[i - coins[j]] + 1 < dp[i]){
                    dp[i] = dp[i - coins[j]]+1;
                }
            }
        }
    }
    if (dp[V] == INF){
    printf("-1\n");
    }
    else{
    printf("%d\n", dp[V]);
    }
    return 0;
}