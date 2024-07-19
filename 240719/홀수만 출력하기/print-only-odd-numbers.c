#include <stdio.h>

int main() {
    int N; scanf("%d", &N);

    for (int i=0; i < N; i++) {
        int n; scanf("%d", &n);
        if (n%2 == 1 && n%3 == 0) {
          printf("%d\n", n);  
        }
    }
    return 0;
}