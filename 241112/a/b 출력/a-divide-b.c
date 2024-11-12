#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d.", a/b);
    a = (a%b)*10;
    for (int i=0; i<20; i++) {
        printf("%d", a/b);
        a = (a%b)*10;
    }
    return 0;
}