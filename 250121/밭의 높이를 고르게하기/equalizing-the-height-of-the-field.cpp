#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int N, H, T;
    cin >> N >> H >> T;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    int ans = 1 << 30;
    for (int i=0; i<N-T+1; i++) {
        int cost = 0;
        for (int j=i; j<i+T; j++) {
            cost += abs(H - arr[j]);
        }
        ans = min(ans, cost);
    }
    cout << ans;

    return 0;
}