#include <iostream>
using namespace std;

int arr[100];

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        int sum_val = 0;
        for (; a1<=a2; a1++) {
            sum_val += arr[a1-1];
        }
        cout << sum_val << endl;
    }
    return 0;
}