#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int n;
    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> arr[i];
    
    int max_val = 0;
    for (int k=1; k<=100; k++) {
        int cnt = 0;
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                if (k - arr[i] == arr[j] - k) cnt++;
            }
        }
        max_val = max(max_val, cnt);
    }
    cout << max_val;

    return 0;
}