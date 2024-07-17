#include <stdio.h>

int main() {
    int n; scanf("%d", &n);

    int i = 3;
    while (i <= n) {
        printf("%d ", i);
        i += 3;
    }
    return 0;
}