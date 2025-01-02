#include <iostream>
using namespace std;

void F(int *x, int N) {
    for (int i=0; i<N; i++) {
        if (x[i]%2 == 0) {
            x[i] /= 2;
        }
        cout << x[i] << ' ';
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N, arr[50];
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    F(arr, N);
    return 0;
}