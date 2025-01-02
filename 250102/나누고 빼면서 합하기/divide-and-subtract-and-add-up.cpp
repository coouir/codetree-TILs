#include <iostream>
using namespace std;

int n, m, arr[100], sum_val;

void F() {
    sum_val += arr[m-1];
    while (m != 1) {
        if (m%2 == 1) {
            m -= 1;
        } else {
            m /= 2;
        }
        sum_val += arr[m-1];
    }
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    F();
    cout << sum_val;
    return 0;
}