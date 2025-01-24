#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    char arr[1001] = {}; 

    int T, a, b;
    cin >> T >> a >> b;
    for (int i=0; i<T; i++) {
        char c; int x;
        cin >> c >> x;
        arr[x] = c;
    }

    int cnt = 0;
    for (int k=a; k<=b; k++) {
        int d1 = 1000;
        int d2 = 1000;
        for (int j=1; j<=1000; j++) {
            if (arr[j] == 'S') d1 = min(d1, abs(k-j));
            if (arr[j] == 'N') d2 = min(d2, abs(k-j));
        }
        if (d1 <= d2) cnt++;
    }
    cout << cnt;

    return 0;
}