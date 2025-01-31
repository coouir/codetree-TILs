#include <iostream>
using namespace std;

int a[110], b[110];

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        char c; int s;
        cin >> c >> s;
        if (c == 'A') {
            a[i] = a[i-1] + s;
            b[i] = b[i-1];
        } else {
            a[i] = a[i-1];
            b[i] = b[i-1] + s;
        }
    }

    int cnt = 0;
    int win = 0; //A: 1, B: 2, AB: 0
    for (int i=0; i<=n; i++) {
        if (a[i] > b[i]) {
            if (win != 1) cnt++;
            win = 1;
        } else if (a[i] < b[i]) {
            if (win != 2) cnt++;
            win = 2;
        } else {
            if (win != 0) cnt++;
            win = 0;
        }
    }
    cout << cnt;

    return 0;
}