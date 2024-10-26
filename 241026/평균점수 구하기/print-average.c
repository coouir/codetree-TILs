#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double score, sum = 0;
    for (int i=0; i<8; i++) {
        scanf("%lf", &score);
        sum += score;
    }
    printf("%.1f", sum/8);
    return 0;
}