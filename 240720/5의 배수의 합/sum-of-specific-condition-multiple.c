#include <stdio.h>

int main() {
    int a, b; scanf("%d %d", &a, &b);
    int h = 0, l = 0;
    int sum_val = 0;
    if (a>b) {
        h=a; l=b;   
    } else {
        h=b; l=a;
    }

    for (int i=l; i<=h; i++) {
        if (i%5 == 0) {
            sum_val += i;
        }
    }
    printf("%d", sum_val);
    return 0;
}