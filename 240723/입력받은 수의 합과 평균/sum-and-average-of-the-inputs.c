#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int sum = 0;
    for (int i=0; i<n; i++) {
        int number; scanf("%d", &number);
        sum += number;
    } 
    printf("%d %.1lf", sum, (double)sum/n);
    return 0;
}