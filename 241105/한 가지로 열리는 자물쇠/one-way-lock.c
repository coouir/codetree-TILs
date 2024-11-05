#include <stdio.h>

int main() {
    int N, a, b, c, cnt = 0;
    scanf("%d", &N);
    scanf("%d %d %d", &a, &b, &c);

    for (int i=1; i<= N; i++) {
        for (int j=1; j<=N; j++) {
            for (int k=1; k <= N; k++) {
                if ((a-i <= 2 && i-a <= 2) || (b-j <= 2 && j-b <= 2) || (c-k <= 2 && k-c <= 2)) {
                    cnt++;
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}