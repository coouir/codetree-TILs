#include <iostream>
using namespace std;

#define OFF 100000

int main() {
    // Please write your code here.
    int n, x1[1000], x2[1000], D[1000], p=0;
    int arr[200001] = {}; // 흰색: 2, 검은색: 1, 회색: 0
    cin >> n;
    for (int i=0; i<n; i++) {
        int x; char c;
        cin >> x >> c;
        if (c == 'L') {
            x1[i] = p-x+1 + OFF;
            x2[i] = p + OFF;
            p = p-x+1;
            D[i] = 1;
        } else {
            x1[i] = p + OFF;
            x2[i] = p+x-1 + OFF;
            p = p+x-1;
            D[i] = 0;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=x1[i]; j<=x2[i]; j++) {
            if (D[i] == 1) {
                arr[j] = 2;
            } else {
                arr[j] = 1;
            }
        }
    }
    int W=0, B=0;
    for (int i=0; i<200001; i++) {
        if (arr[i] == 2) W++;
        else if (arr[i] == 1) B++;
    }
    cout << W << ' ' << B;
    return 0;
}