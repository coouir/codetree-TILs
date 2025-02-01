#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10000];
    int avg = 0;

    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        avg += arr[i];
    }
    avg /= n;

    int cnt = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] == avg) continue;
        if (arr[i] > avg) {
            for (int j=0; j<n; j++) {
                if (arr[j] < avg) {
                    while (arr[i] > avg && arr[j] < avg) {
                        arr[i]--;
                        arr[j]++;
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;

    return 0;
}

// 20 / 4 = 5

// 2   10  7   1
// 5   7   7   1
// 5   5   7   3
// 5   5   5   5
