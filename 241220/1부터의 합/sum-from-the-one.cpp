#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum_val = 0;
    cin >> n;

    for (int i=1; i<=100; i++) {
        sum_val += i;
        if (sum_val > n) {
            cout << i;
            break;
        }
    }
    return 0;
}