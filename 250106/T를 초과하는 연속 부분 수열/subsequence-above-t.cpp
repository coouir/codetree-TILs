#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, t, arr[1000];
    cin >> n >> t;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int cnt=0, ans=0;
    for (int i=0; i<n; i++) {
        if (arr[i] > t) {
            cnt++;
        } else {
            cnt = 0;
        }
        if (ans < cnt) ans = cnt;
    }
    cout << ans;
    return 0;
}