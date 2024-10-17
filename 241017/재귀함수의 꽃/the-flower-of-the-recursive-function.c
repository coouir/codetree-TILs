#include <stdio.h>

void f(int num);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}

void f(int num) {
    if (num == 0) {
        return;
    }
    printf("%d ", num);
    f(num-1);
    printf("%d ", num);
}