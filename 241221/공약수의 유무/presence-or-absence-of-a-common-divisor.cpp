#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    bool check = false;
    for (; a<=b; a++) {
        if (1920%a == 0 && 2880%a == 0) {
            check = true;
        }
    }

    cout << check;
    return 0;
}