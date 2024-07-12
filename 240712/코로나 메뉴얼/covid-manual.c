#include <stdio.h>

int main() {
    char a, b, c;
    int aT, bT, cT;

    scanf("%c %d %c %d %c %d", &a, &aT, &b, &bT, &c, &cT);

    if (a == 'Y' && aT >= 37) {
        if ((b == 'Y' && bT >= 37) || (c == 'Y' && cT >= 37)) {
            printf("E");
        } else {
            printf("N");
        }
    } else {
        if ((b == 'Y' && bT >= 37) && (c == 'Y' && cT >= 37)) {
            printf("E");
        } else {
            printf("N");
        }
    }
    return 0;
}