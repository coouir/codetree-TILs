#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        int arr[4], sum_val=0;
        for (int j=0; j<4; j++) {
            cin >> arr[j];
            sum_val += arr[j];
        }
        if (sum_val/4 >= 60) {
            cout << "pass" << endl;
            cnt++;
        } else {
            cout << "fail" << endl;
        }
    }
    cout << cnt;
    return 0;
}