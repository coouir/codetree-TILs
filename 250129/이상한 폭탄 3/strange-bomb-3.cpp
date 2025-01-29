#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int arr[100];
int cnt[1000001];

int main() {
    // Please write your code here.
    int N, K;
    cin >> N >> K;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    
    for (int i=0; i<N; i++) {
        int count = 0;
        for (int j=0; j<N; j++) {
            if (abs(i-j) > K) continue;

            if (arr[i] == arr[j]) count++;
        }
        if (count != 1) {
            cnt[arr[i]] = max(cnt[arr[i]], count);
        } 
    }

    int max_index = 0;
    for (int i=1; i<=1000000; i++) {
        if (cnt[max_index] <= cnt[i]) max_index = i;
    }
    
    if (cnt[max_index] != 0) {
        cout << max_index;
    } else {
        cout << 0;
    }

    return 0;
}

// N K
// 6 3
// 7 2 4 2 2 4
