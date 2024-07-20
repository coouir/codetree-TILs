#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int sum_val = 0;
    for (int i=0; i < n; i++) {
        int number; scanf("%d", &number);
        if (number%2 == 1 && number%3 == 0) {
            sum_val += number;
        }
    }
    printf("%d", sum_val);
    return 0;
}