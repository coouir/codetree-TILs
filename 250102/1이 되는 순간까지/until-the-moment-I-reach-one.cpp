#include <iostream>
using namespace std;

int F(int N) {
    if (N == 1) {
        return 0;
    }
    if (N%2 == 0) {
        return F(N/2)+1;
    } else {
        return F(N/3)+1;
    }
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}