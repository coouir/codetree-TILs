#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[20];
    int cnt=0, sum_val=0;
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    char c;
    cin >> c;
    for (int i=0; i<n; i++) {
        if (arr[i][0] == c) {
            cnt++;
            sum_val += arr[i].length();
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << cnt << ' ' << (double)sum_val/cnt;
    return 0;
}