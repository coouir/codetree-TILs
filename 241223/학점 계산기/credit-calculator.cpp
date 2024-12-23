#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    double arr[5], sum_val = 0;

    for (int i=0; i<n; i++) {
        cin >> arr[i];
        sum_val += arr[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << sum_val / n << endl;

    if (sum_val / n >= 4.0) {
        cout << "Perfect";
    } else if (sum_val / n >= 3.0) {
        cout << "Good";
    } else {
        cout << "Poor";
    }
    return 0;
}