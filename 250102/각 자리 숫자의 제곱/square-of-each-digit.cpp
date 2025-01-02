#include <iostream>
using namespace std;

int F(int N) {
    if (N < 10) return N*N;
    return F(N/10) + (N%10)*(N%10);
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}