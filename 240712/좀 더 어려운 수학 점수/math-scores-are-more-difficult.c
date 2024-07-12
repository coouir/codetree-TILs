#include <stdio.h>

int main() {
    int aM, aE, bM, bE;
    scanf("%d %d %d %d", &aM, &aE, &bM, &bE);

    if (aM > bM) {
        printf("A");
    } else if (aM < bM) {
        printf("B");
    } else {
        if (aE > bE) {
            printf("A");
        } else {
            printf("B");
        }
    }
    return 0;
}