#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[101]={};
    cin >> n;
    for (int i=0; i<n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        for (int j=x1; j<=x2; j++) {
            arr[j]++;
        }
    }
    int M = 0;
    for (int i=1; i<=100; i++) {
        if (M < arr[i]) M = arr[i];
    }
    cout << M;
    return 0;
}