#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;

    int arr[10];
    for (int i=0; i<10; i++) {
        scanf("%d ", &arr[i]);
        if (arr[i] >= 250) {
            for (int j=0; j<i; j++) {
                sum += arr[j];
            }
            printf("%d %.1f", sum, (double) sum/i);
            return 0;
        }
    }
    for (int i=0; i<10; i++) {
        sum += arr[i];
    }
    printf("%d %.1f", sum, (double) sum/10);
    return 0;
}