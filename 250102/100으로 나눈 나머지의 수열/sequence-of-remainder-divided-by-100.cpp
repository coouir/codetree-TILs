#include <iostream>
using namespace std;

int F(int N) {
    if (N == 1) return 2;
    if (N == 2) return 4;
    return (F(N-1) * F(N-2))%100;
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}