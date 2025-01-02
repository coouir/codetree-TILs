#include <iostream>
using namespace std;

int F(int N) {
    if (N == 0) return 1;
    if (N == 1) return 1;
    return N*F(N-1);
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}