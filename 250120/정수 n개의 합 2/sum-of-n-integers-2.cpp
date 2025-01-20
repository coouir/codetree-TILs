#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100001];
    int arrPS[100001];

    int n, k;
    cin >> n >> k;
    for (int i=1; i<=n; i++) {
        cin >> arr[i];
        arrPS[i] = arrPS[i-1] + arr[i];
    } 
    
    int max_val = -1 << 30;
    for (int i=k; i<=n; i++) {
        max_val = max(max_val, arrPS[i] - arrPS[i-k]);
    }
    cout << max_val;

    return 0;
}