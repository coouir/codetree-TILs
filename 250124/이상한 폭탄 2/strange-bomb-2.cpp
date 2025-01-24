#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int N, K;
    cin >> N >> K;
    for (int i=0; i<N; i++) 
        cin >> arr[i];

    int max_val = -1;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (j-i > 3) continue;
            if (arr[i] == arr[j]) max_val = max(max_val, arr[i]);
        }
    }
    cout << max_val;
    
    return 0;
}