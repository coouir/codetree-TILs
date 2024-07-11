#include <stdio.h>

int main() {
    double l, r;
    scanf("%lf %lf", &l, &r);

    if (l >= 1.0 && r >= 1.0) {
        printf("High");
    } else if (l >= 0.5 && r >= 0.5) {
        printf("Middle");
    } else {
        printf("Low");
    }
    return 0;
}