#include <stdio.h>
int main() {
    int Q;
    scanf("%d", &Q);
    while (Q--) {
        int l, r;
        scanf("%d %d", &l, &r);

        int ans = -1;
        for (int i = r; i >= l; i--) {
            int prime = 1;   

            if (i < 2) prime = 0;   

            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = 0; 
                    break;
                }
            }
            if (prime) {
                ans = i;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
