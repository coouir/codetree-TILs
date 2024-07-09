#include <stdio.h>

int main() {
    int a = 2, b = 5;
    int temp = a;
    a = b; b = temp;

    printf("%d\n%d", a, b);
    return 0;
}