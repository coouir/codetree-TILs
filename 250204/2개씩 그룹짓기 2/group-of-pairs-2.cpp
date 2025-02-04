#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100000];
    
    int n;
    cin >> n;
    for (int i=0; i<2*n; i++) 
        cin >> arr[i];
    
    sort(arr, arr+2*n);

    int min_val = 1 << 30;
    for (int i=0; i<n; i++) {
        min_val = min(min_val, arr[i+n] - arr[i]);
    }
    cout << min_val;
    
    return 0;
}

// 2

// 2n
// 15   2   7   9   10   5

// 2   5   7   9   10   15

// 2, 5 = 3


// 2, 7 = 5
// 2, 9
// 2, 10 = 8
// 5, 7, 9, 15


// 2, 15

