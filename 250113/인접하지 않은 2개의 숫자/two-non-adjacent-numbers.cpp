#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int max_val = 0;
    for (int i=0; i<n; i++) {
        int m = 0;
        for (int j=0; j<=i-2; j++) {
            if (m < arr[j]) m = arr[j];
        }
        for (int k=i+2; k<n; k++) {
            if (m < arr[k]) m = arr[k];
        }
        if (m != 0 && max_val < arr[i] + m) max_val = arr[i] + m;
    }
    cout << max_val;
    return 0;
}