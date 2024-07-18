#include <stdio.h>

int main() {
    int a, b; scanf("%d %d", &a, &b);

    for(int i=0; i < 21; i++) {
        if (i == 0) {
            printf("%d.", a/b);
        } else {
            printf("%d", a/b);
        }
        a = (a%b)*10;
    } 
    return 0;
}