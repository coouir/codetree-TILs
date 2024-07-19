#include <stdio.h>

int main() {
    int cnt = 0;

    for (int i=0; i < 5; i++) {
        int n; scanf("%d", &n);
        if (n%2 == 0) {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}