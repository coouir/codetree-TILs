#include <stdio.h>

int main() {
    int a, b; scanf("%d %d", &a, &b);
    int prod = 1;
    for (int i=1; i<=b; i++) {
        if (i%a == 0) {
            prod *= i;
        } 
    } 
    printf("%d", prod);
    return 0;
}