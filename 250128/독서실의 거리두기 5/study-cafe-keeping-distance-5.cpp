#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[20];

    int N;
    cin >> N;
    
    for (int i=0; i<N; i++) 
        scanf("%1d", &arr[i]);

    int max_val = 0;
    for (int i=0; i<N; i++) {
        if (arr[i] == 1) continue;
        arr[i] = 1;

        int min_val = 1 << 30;
        for (int j=0; j<N; j++) {
            for (int k=j+1; k<N; k++) {
                if (arr[j] == 1 && arr[k] == 1) {
                    min_val = min(min_val, k-j);
                    break;
                }
            }
        }
        max_val = max(max_val, min_val);
        arr[i] = 0;
    }
    cout << max_val;

    return 0;
}