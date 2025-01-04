#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, x1[100], x2[100], arr[2001]={};
    cin >> n;

    int p = 0;
    for (int i=0; i<n; i++) {
        int x; char c;
        cin >> x >> c;
        if (c == 'L') {
            x1[i] = p-x + 1000;
            x2[i] = p + 1000;
            p -= x;
        } else {
            x1[i] = p + 1000;
            x2[i] = p+x + 1000;
            p += x;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=x1[i]; j<x2[i]; j++) {
            arr[j]++;
        }
    }
    int cnt = 0;
    for (int i=0; i<2001; i++) {
        if (arr[i] >= 2) cnt++;
    }
    cout << cnt;
    return 0;
}