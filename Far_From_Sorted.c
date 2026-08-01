#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (a[i] > a[j]) {
                count++;
            }
     }
    }
    printf("%d\n", count);
    return 0;
}
