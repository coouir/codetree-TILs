#include <iostream>
using namespace std;

int F(int N) {
    if (N == 1) return 1;
    if (N == 2) return 2;
    return F(N/3) + F(N-1);
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}