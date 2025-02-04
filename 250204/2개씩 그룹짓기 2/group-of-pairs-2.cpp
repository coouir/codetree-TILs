#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    long long arr[100000];
    
    int n;
    cin >> n;
    for (int i=0; i<2*n; i++) 
        cin >> arr[i];
    
    sort(arr, arr+2*n);

    long long min_val = 1 << 30;
    for (int i=0; i<n; i++) {
        min_val = min(min_val, arr[i+n] - arr[i]);
    }
    cout << min_val;
    
    return 0;
}
