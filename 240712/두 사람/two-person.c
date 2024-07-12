#include <stdio.h>

int main() {
    int aA, bA;
    char aM, bM;

    scanf("%d %c %d %c", &aA, &aM, &bA, &bM);

    if ((aA >= 19 && aM == 'M') || (bA >= 19 && bM == 'M')) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}