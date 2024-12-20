#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum_val = 0;
    cin >> n;

    for (int i=1; i<n; i++) {
        if (n%i == 0) {
            sum_val += i;
        }
    }

    if (n == sum_val) {
        cout << 'P';
    } else {
        cout << 'N';
    }
    return 0;
}