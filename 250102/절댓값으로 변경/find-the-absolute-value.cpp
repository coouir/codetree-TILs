#include <iostream>
using namespace std;

void F(int *arr, int N) {
    for (int i=0; i<N; i++) {
        if (arr[i] < 0) arr[i] = -arr[i];
    }
}

int main() {
    // Please write your code here.
    int N, arr[50];
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    F(arr, N);
    for (int i=0; i<N; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}