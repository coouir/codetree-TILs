#include <stdio.h>

int main() {
    double e;
    scanf("%lf", &e);

    if (e >= 1) {
        printf("High");
    } else if (e >= 0.5) {
        printf("Middle");
    } else {
        printf("Low");
    }

    return 0;
}