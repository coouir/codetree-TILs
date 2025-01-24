#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    char arr[1001]; 

    int T, a, b;
    cin >> T >> a >> b;
    for (int i=0; i<T; i++) {
        char c; int x;
        cin >> c >> x;
        arr[x] = c;
    }

    int cnt = 0;
    for (int i=a; i<=b; i++) {
        int d1 = 1000;
        int d2 = 1000;
        for (int j=i; j>=0; j--) {
            if (arr[j] == 'S') d1 = min(d1, i-j); 
            if (arr[j] == 'N') d2 = min(d2, i-j);
        }
        for (int j=i; j<=1000; j++) {
            if (arr[j] == 'S') d1 = min(d1, j-i);
            if (arr[j] == 'N') d2 = min(d2, j-i);
        }
        if (d1 <= d2) cnt++;
    }
    cout << cnt;

    return 0;
}