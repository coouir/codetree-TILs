#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arrA[110] = {};
    int arrB[110] = {};

    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> arrA[i];
    for (int i=1; i<=n; i++)
        cin >> arrB[i];
    
    int cnt = 0;
    for (int i=1; i<n; i++) {
        if (arrA[i] > arrB[i]) {
            int d = arrA[i]-arrB[i];
            cnt += (d);
            arrA[i] -= d;
            arrA[i+1] += d;
        }
    }
    cout << cnt; 

    return 0;
}