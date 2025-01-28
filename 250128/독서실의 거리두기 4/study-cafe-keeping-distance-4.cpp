#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int N;
    cin >> N;
    for (int i=0; i<N; i++)
        scanf("%1d", &arr[i]);
    
    int max_val = 0;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (arr[i] == 1 || arr[j] == 1) continue;
            arr[i] = 1;
            arr[j] = 1;

            int min_val = 1<<30;
            for (int k=0; k<N; k++) {
                for (int l=k+1; l<N; l++) {
                    if (arr[k] == 1 && arr[l] == 1) {
                        min_val = min(min_val, l-k);
                    }
                }
            }
            max_val = max(max_val, min_val);

            arr[i] = 0;
            arr[j] = 0;
        }
    }
    cout << max_val;

    return 0;
}