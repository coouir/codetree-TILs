#include <bits/stdc++.h>
using namespace std;

int n;
int arr[110];

int main() {
    // Please write your code here.
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);

    for (int i=0; i<n; i++) cout << arr[i] << ' ';
    cout << '\n';
    for (int i=n-1; i>=0; i--) cout << arr[i] << ' ';

    return 0;
}