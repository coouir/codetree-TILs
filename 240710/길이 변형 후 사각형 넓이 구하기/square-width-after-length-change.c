#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a += 8;
    b *= 3;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d", a*b);    
    return 0;
}