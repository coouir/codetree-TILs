#include <iostream>
using namespace std;

void F(int N) {
    if (N == 0) return;
    cout << N << ' ';
    F(N-1);
    cout << N << ' ';
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    F(N);
    return 0;
}