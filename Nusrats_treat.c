#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int chocolates = N * (N + 1) / 2;
    printf("%d\n", chocolates);

    return 0;
}
 
