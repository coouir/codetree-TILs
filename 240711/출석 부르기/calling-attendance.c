#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("John");
    } else if (n == 2) {
        printf("Tom");
    } else if (n == 3) {
        printf("Paul");
    } else {
        printf("Vacancy");
    }
    return 0; 
}