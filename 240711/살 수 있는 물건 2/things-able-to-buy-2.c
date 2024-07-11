#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);

    if (money >= 3000) {
        printf("book");
    } else if (money >= 1000) {
        printf("mask");
    } else if (money >= 500) {
        printf("pen");
    } else {
        printf("no");
    }
    return 0;
}