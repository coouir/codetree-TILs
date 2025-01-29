#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int n, k;
    cin >> n >> k;
    for (int i=0; i<n; i++)
        cin >> arr[i];
    
    int min_val = 1 << 30;
    for (int i=1; i<=10000-k; i++) {
        int cost = 0;
        for (int j=0; j<n; j++) {
            if (arr[j] < i) cost += (i-arr[j]);
            else if (i+k < arr[j]) cost += (arr[j]-(i+k));
        }
        min_val = min(min_val, cost);
    }
    cout << min_val;
    
    return 0;
}