#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            cout << "  ";
        }
        for (int k=0; k<2*i+1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

// B, n = 3
// 0 -> 2
// 1 -> 1
// 2 -> 0

// S, n = 3
// 0 -> 1
// 1 -> 3
// 2(x) + 1

// S, n = 4
// 0 -> 1
// 1 -> 3