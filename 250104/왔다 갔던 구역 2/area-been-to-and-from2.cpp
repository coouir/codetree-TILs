#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[2001]={}, p=1000;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x; char c;
        cin >> x >> c;
        for (int j=0; j<x; j++) {
            if (c == 'L') {
                arr[p--]++;
            } else {
                arr[p++]++;
            }
        }
    }
    int cnt = 0;
    for (int i=0; i<2001; i++) {
        if (arr[i] >= 2) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}