#include <stdio.h>

int main() {
    int sum_val = 0, cnt = 0;
    for (int i=0; i < 10; i++) {
        int n; scanf("%d", &n);
        if (0 <= n && n <= 200) {
            sum_val += n;
            cnt ++;
        }
    }
    printf("%d %.1lf", sum_val, (double)sum_val/cnt);
    return 0;
}