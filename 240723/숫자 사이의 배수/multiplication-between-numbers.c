#include <stdio.h>

int main() {
    int a, b; scanf("%d %d", &a, &b);
    int sum_val = 0, cnt = 0; 
    for (int i=a; i <= b; i++) {
        if (i%5 == 0 || i%7 == 0) {
            sum_val += i;
            cnt++;
        }
    }
    printf("%d %.1lf", sum_val, (double)sum_val/cnt);
    return 0;
}