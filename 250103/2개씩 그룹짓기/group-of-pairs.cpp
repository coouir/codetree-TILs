#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[2000];
    cin >> n;
    for (int i=0; i<2*n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+2*n);
    int Max = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] + arr[2*n-1-i] > Max) {
            Max = arr[i] + arr[2*n-1-i];
        }
    }
    cout << Max;
    return 0;
}