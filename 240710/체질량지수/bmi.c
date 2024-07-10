#include <stdio.h>

int main() {
    int h, w, b;
    scanf("%d %d", &h, &w);
    b = (10000)*w/(h*h);

    printf("%d", b);
    if (b >= 25) {
        printf("\nObesity");
    }
    return 0;
}