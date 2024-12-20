#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt = 0;
    cin >> a >> b;

    for (a; a<=b; a++) {
        if (a%5 == 0) {
            cnt += a;
        }
    }
    cout << cnt;
    return 0;
}