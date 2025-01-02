#include <iostream>
#include <algorithm>
using namespace std;

int F(int *arr, int n) {
    if (n == -1) return 0;
    return max(arr[n], F(arr, n-1));
} 

int main() {
    // Please write your code here.
    int n, arr[100];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << F(arr, n-1);
    return 0;
}