#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int a, b, sum_val = 0;
        cin >> a >> b;
        for (; a<=b; a++) {
            if (a%2 == 0) {
                sum_val += a;
            }
        }
        cout << sum_val << endl;
    }
    return 0;
}