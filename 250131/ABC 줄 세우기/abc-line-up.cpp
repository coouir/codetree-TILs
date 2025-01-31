#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[26];

    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        char c;
        cin >> c;
        arr[i] = c - 65;
    }

    int cnt = 0;
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
