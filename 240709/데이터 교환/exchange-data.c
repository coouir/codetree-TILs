#include <stdio.h>

int main() {
    int a = 5, b = 6, c = 7;
    int temp = a;
    a = c;
    c = b;
    b = temp;

    printf("%d\n%d\n%d", a, b, c);
    return 0;
}