#include <stdio.h>

int main() {
    int cnt3 = 0, cnt5 = 0;

    for (int i=0; i < 10; i++) {
        int n; scanf("%d", &n);
        if (n%3 == 0) {
            cnt3++;
        }
        if (n%5 == 0) {
            cnt5++;
        }
    }
    printf("%d %d", cnt3, cnt5);
    return 0;
}