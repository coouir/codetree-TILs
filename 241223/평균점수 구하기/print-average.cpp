#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double arr[8], sum_val = 0;
    for (int i=0; i<8; i++) {
        cin >> arr[i];
        sum_val += arr[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << sum_val/8;
    return 0;
}