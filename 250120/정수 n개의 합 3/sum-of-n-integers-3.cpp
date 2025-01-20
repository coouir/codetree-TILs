#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[501][501];
    int prefix[501][501] = {};

    int n, k;
    cin >> n >> k;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            prefix[i][j] = arr[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    int max_val = 0;
    for (int i=1; i<=n-k+1; i++) {
        for (int j=1; j<=n-k+1; j++) {
            max_val = max(max_val, prefix[i+k-1][j+k-1] - prefix[i+k-1][j-1] - prefix[i-1][j+k-1] + prefix[i-1][j-1]);
        }
    }
    cout << max_val;

    return 0;
}