#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int N, K;
    cin >> N >> K;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    
    int max_val = 0;
    int max_n = 0;
    for (int n=1; n<=10; n++) {
        int index = 0;
        int arrSat[100] = {};
        for (int i=0; i<N; i++) {
            if (arr[i] == n) arrSat[index++] = i;
        }
        
        int cnt = 0;
        for (int i=0; i<index-1; i++) {
            if (arrSat[i] - arrSat[i-1] > K) break;
            cnt++;
        }
        if (cnt != 0) {
            if (max_val <= cnt) {
                max_val = cnt;
                max_n = n;
            }
        } 
    }
    cout << max_n;
    
    return 0;
}