#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int sum_val = 0;

    int N, S;
    cin >> N >> S;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
        sum_val += arr[i];
    }

    int ans = 1 << 30;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            ans = min(ans, abs(sum_val - arr[i] - arr[j] - S));
        }
    }
    cout << ans;

    return 0;
}