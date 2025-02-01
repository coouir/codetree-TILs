#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100000];

    int n;
    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> arr[i];
    
    sort(arr, arr+n);

    int max_val = -1 << 30;
    // Case 1)
    max_val = max(max_val, arr[n-1] * arr[n-2] * arr[n-3]);

    // Case 2)
    max_val = max(max_val, arr[0] * arr[1] * arr[n-1]);
    
    // Case 3)
    bool check = false;
    for (int i=0; i<n; i++) {
        if (arr[i] == 0) {
            check = true;
            break;
        }
    }
    if (check) {
        max_val = max(max_val, 0);
    }

    // Case 4)
    int index = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] >= 0) break;
        index = i; 
    }
    max_val = max(max_val, arr[index] * arr[index-1] * arr[index-2]);

    cout << max_val;
    
    return 0;
}
