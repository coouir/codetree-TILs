#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    bool check = true;
    cin >> a >> b >> c;
    for (; a<=b; a++) {
        if (a%c == 0) {
            check = false;
        }
    }

    if (check) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}