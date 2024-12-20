#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum_val = 0, cnt = 0;
    cin >> a >> b;

    for (; a<=b; a++) {
        if (a%5 == 0 || a%7 == 0) {
            sum_val += a;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum_val << ' ' << (double) sum_val/cnt;
    return 0;
}