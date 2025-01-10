#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int m = INT_MAX;
    for (int i=0; i<n; i++) {
        int sum_val = 0;
        for (int j=0; j<n; j++) {
            sum_val += arr[j]*abs(i-j);
        }
        if (m > sum_val) m = sum_val;
    }
    cout << m;
    return 0;
}