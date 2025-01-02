#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i=0; i<n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    for (int i=0; i<n; i++) {
        cout << arr[n-1-i] << ' ';
    }
    return 0;
}