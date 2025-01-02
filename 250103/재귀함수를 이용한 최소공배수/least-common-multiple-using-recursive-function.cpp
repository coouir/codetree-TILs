#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];

int GCD (int a, int b) {
    int gcd = 1;
    for (int i=2; i<=min(a, b); i++) {
        if (a%i == 0 && b%i == 0) gcd = i;
    }
    return gcd;
}

int LCM (int a, int b) {
    return (a*b) / GCD(a, b);
}

int F(int N) {
    int lcm = LCM(arr[N], arr[N-1]);
    if (N == 1) return lcm;
    return LCM(lcm, F(N-1));
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << F(n-1);
    return 0;
}