#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum_val = 0;
    cin >> a >> b;

    if (a <=  b) {
        for (; a<=b; a++) {
            if (a%5 == 0) {
                sum_val += a;
            }
        }
    } else {
        for (; b<=a; b++) {
            if (b%5 == 0) {
                sum_val += b;
            }
        }
    }

    cout << sum_val;
    return 0;
}