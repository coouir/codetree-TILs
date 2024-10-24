#include <stdio.h>

int main() {
    int sum = 0, x;
    for (int i=0; i < 10; i++) {
        scanf("%d ", &x);
        sum += x;
    }
    printf("%d", sum);
    return 0;
}