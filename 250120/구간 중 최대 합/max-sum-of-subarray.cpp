#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int n, k;
    cin >> n >> k;
    for (int i=0; i < n; i++) 
        cin >> arr[i];

    int max_val = 0;
    for (int i=0; i < n-k+1; i++) {
        int sum_val = 0;
        for (int j=0; j<k; j++) 
            sum_val += arr[i+j];
        max_val = max(max_val, sum_val);
    }
    cout << max_val;

    return 0;
}