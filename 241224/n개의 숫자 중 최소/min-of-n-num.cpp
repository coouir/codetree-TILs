#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[100];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int min_val = arr[0];
    for (int i=1; i<n; i++) {
        if (min_val > arr[i]) {
            min_val = arr[i];
        }
    }
    int cnt=0;
    for (int i=0; i<n; i++) {
        if (arr[i] == min_val) {
            cnt++;
        }
    }
    cout << min_val << ' ' << cnt;
    return 0;
}