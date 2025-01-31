#include <iostream>
using namespace std;

int a[110], b[110], c[110];

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        char ch; int s;
        cin >> ch >> s;
        if (ch == 'A') {
            a[i] = a[i-1] + s;
            b[i] = b[i-1];
            c[i] = c[i-1];
        } else if (ch == 'B'){
            a[i] = a[i-1];
            b[i] = b[i-1] + s;
            c[i] = c[i-1];
        } else {
            a[i] = a[i-1];
            b[i] = b[i-1];
            c[i] = c[i-1] + s;
        }
    }

    int cnt = 0;
    int win = 7;
    for (int i=0; i<=n; i++) {
        // Case 1) A
        // Case 2) B
        // Case 3) C
        // Case 4) AB
        // Case 5) BC
        // Case 6) AC
        // Case 7) ABC
        if (a[i] > b[i] && a[i] > c[i]) {
            if (win != 1) cnt++;
            win = 1;
        } else if (b[i] > a[i] && b[i] > c[i]) {
            if (win != 2) cnt++;
            win = 2;
        } else if (c[i] > a[i] && c[i] > b[i]) {
            if (win != 3) cnt++;
            win = 3;
        } else if (a[i] == b[i] && b[i] > c[i]) {
            if (win != 4) cnt++;
            win = 4;
        } else if (b[i] == c[i] && c[i] > a[i]) {
            if (win != 5) cnt++;
            win = 5;
        } else if (c[i] == a[i] && a[i] > b[i]) {
            if (win != 6) cnt++;
            win = 6;
        } else {
            if (win != 7) cnt++;
            win = 7;
        }
    }
    cout << cnt;

    return 0;
}