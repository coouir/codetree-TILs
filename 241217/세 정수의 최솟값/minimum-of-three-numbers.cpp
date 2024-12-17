#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    if (b >= a && c >= a) {
        cout << a;
    } else if (a >= b && c >= b) {
        cout << b;
    } else {
        cout << c;
    }
    return 0;
}