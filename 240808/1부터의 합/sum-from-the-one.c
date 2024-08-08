#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int s = 0;

    for (int i=1; i <= 100; i++) {
        s += i;
        if (s >= n) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}