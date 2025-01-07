#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, m, arrA[10000000]={0}, arrB[10000000]={0};
    cin >> n >> m;
    int time_a = 1;
    for (int i=0; i<n; i++) {
        int t; char d;
        cin >> t >> d;
        if (d == 'L') {
            while(t--) {
                arrA[time_a] = arrA[time_a-1] - 1;
                time_a++;
            }
        } else {
            while(t--) {
                arrA[time_a] = arrA[time_a-1] + 1;
                time_a++;
            }
        }
    }
    int time_b = 1;
    for (int i=0; i<m; i++) {
        int t; char d;
        cin >> t >> d;
        if (d == 'L') {
            while(t--) {
                arrB[time_b] = arrB[time_b-1] - 1;
                time_b++;
            }
        } else {
            while(t--) {
                arrB[time_b] = arrB[time_b-1] + 1;
                time_b++;
            }
        }
    }

    if (time_a < time_b) {
        for (int i=time_a; i<time_b; i++) {
            arrA[i] = arrA[i-1];
        }
    } else if (time_b < time_a) {
        for (int i=time_b; i<time_a; i++) {
            arrB[i] = arrB[i-1];
        }
    }

    int cnt = 0;
    for (int i=1; i<max(time_a, time_b); i++) {
        if (arrA[i] == arrB[i] && arrB[i-1] != arrA[i-1]) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}