#include <iostream>
using namespace std;

int F(int N) {
    if (N == 1) return 1;
    return F(N-1)+N;
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}