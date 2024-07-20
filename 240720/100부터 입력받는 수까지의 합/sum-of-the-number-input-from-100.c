#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int sum_val = 0;
    for (int i=n; i <= 100; i++) {
        sum_val += i;
    }
    printf("%d", sum_val);
    return 0;
}