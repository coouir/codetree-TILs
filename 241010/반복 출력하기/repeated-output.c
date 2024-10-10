#include <stdio.h>

void print_repeat(int N) {
    for (int i=0; i<N; i++) {
        printf("12345^&*()_\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    print_repeat(N);
    return 0;
}