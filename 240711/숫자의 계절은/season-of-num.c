#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 12 || n <= 2) {
        printf("Winter");
    } else if (n <= 5) {
        printf("Spring");
    } else if (n <= 8) {
        printf("Summer");
    } else {
        printf("Fall");
    }
    return 0;
}