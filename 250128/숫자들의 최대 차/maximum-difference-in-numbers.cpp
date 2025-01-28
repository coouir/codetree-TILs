#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[1000];

    int N, K;
    cin >> N >> K;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    
    sort(arr, arr+N);

    int max_val = 0;
    for (int i=0; i<N; i++) {
        int cnt = 1;
        for (int j=i+1; j<N; j++) {
            if (arr[j] - arr[i] <= K) {
                cnt++;
            } else {
                break;
            }
        }
        max_val = max(max_val, cnt);
    }
    cout << max_val;
    
    return 0;
}


// 1 1 3 4 6
