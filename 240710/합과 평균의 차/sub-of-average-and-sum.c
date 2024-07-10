#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a+b+c);
    printf("%d\n", (a+b+c)/3);
    printf("%d", (a+b+c)-((a+b+c)/3));
    return 0;
}