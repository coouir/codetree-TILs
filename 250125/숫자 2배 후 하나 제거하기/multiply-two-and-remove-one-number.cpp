#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr1[100];

    int n;
    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> arr1[i];
    
    int min_val = 1 << 30;
    for (int i=0; i<n; i++) {
        arr1[i] *= 2;
        for (int j=0; j<n; j++) {
            int arr2[100];

            int cnt = 0;
            for (int k=0; k<n; k++) {
                if (j == k) continue;
                arr2[cnt++] = arr1[k];
            }

            int sum_val = 0;
            for (int k=0; k<cnt-1; k++) {
                sum_val += abs(arr2[k]-arr2[k+1]);
            }
            min_val = min(min_val, sum_val);
        }
        arr1[i] /= 2;
    }
    cout << min_val;

    return 0;
}