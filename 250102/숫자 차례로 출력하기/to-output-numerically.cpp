#include <iostream>
using namespace std;

void F1(int N) {
    if (N == 0) return;
    F1(N-1);
    cout << N << ' ';
}
void F2(int N) {
    if (N == 0) return;
    cout << N << ' ';
    F2(N-1);
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    F1(N);
    cout << endl; 
    F2(N);
    return 0;
}