#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string arr[100];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i=0; i<n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}