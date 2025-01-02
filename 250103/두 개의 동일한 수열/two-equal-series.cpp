#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, arrA[100], arrB[100];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arrA[i];
    }
    for (int i=0; i<n; i++) {
        cin >> arrB[i];
    }
    sort(arrA, arrA+n);
    sort(arrB, arrB+n);
    bool check = true;
    for (int i=0; i<n; i++) {
        if (arrA[i] != arrB[i]) {
            check = false;
            break;
        }
    }
    cout << (check == true ? "Yes" : "No");
    return 0;
}