#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int max_val = 0;

    int n, k;
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        max_val = max(max_val, arr[i]);
    }

    int min_val = 1 << 30;
    for (int i=max_val; i>=1; i--) {
        int available_indices[100] = {};
        int index = 0;

        for (int j=0; j<n; j++) 
            if (i >= arr[j]) available_indices[index++] = j;
        
        bool check = true;
        for (int j=1; j<index; j++) {
            if (available_indices[j] - available_indices[j-1] > k) {
                check = false;
                break;
            } 
        }

        if (check) min_val = min(min_val, i);
        else break;
    }
    cout << min_val;
    
    return 0;
}