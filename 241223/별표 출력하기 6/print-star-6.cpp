#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            cout << "  ";
        }
        for (int j=0; j<2*n-1-2*i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i=n-2; i>=0; i--) {
        for (int j=0; j<i; j++) {
            cout << "  ";
        }
        for (int j=0; j<2*n-1-2*i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


// 2 -> 3
// 3 -> 5
// 2(x-2) + 3 = 2x-1