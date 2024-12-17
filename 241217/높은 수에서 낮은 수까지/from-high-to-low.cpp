#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    if (a >= b) {
        for ( ; a>=b; a--) {
            cout << a << ' ';
        }
    } else {
        for ( ; b>=a; b--) {
            cout << b << ' ';
        }
    }
    return 0;
}