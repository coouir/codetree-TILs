#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int a = 0, b = 0, c = 0;

    for (int i=1; i <= n; i++) {
        if (i%12 == 0) {
            c += 1;
        } else if (i%3 == 0) {
            b += 1;
        } else if (i%2 == 0) {
            a += 1;
        }
    }
    printf("%d %d %d", a, b, c);
    return 0;
}