#include <stdio.h>

int main() {
    int aM, aE, bM, bE;
    scanf("%d %d %d %d", &aM, &aE, &bM, &bE);

    if (aM > bM && aE > bE) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}