#include <stdio.h>

int main() {
    int score1, score2;
    scanf("%d %d", &score1, &score2);

    if (score1 >= 90) {
        if (score2 >= 95) {
            printf("100000");
        } else if (score2 >= 90) {
            printf("50000");
        } else {
            printf("0");
        }
    } else {
        printf("0");
    }
    return 0;
}