#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num, sum_val = 0;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> num;

        if (num%2 == 1 && num%3 == 0) {
            sum_val += num;
        }
    }

    cout << sum_val;

    return 0;
}