#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    scanf("%d", &n);

    double arr[5];
    for (int i=0; i<n; i++) {
        scanf("%lf", &arr[i]);
        sum = sum + arr[i];
    }
    if (sum/n >= 4.0) {
        printf("%.1f\nPerfect", sum/n);
    } else if(sum/n >= 3.0) {
        printf("%.1f\nGood", sum/n);
    } else {
        printf("%.1f\nPoor", sum/n);
    }
    return 0;
}