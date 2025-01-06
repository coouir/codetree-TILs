#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, M, arrA[1000001]={}, arrB[1000001]={};
    cin >> N >> M;
    
    int time_a = 1;
    for (int i=0; i<N; i++) {
        int v, t;
        cin >> v >> t;
        while (t--) {
            arrA[time_a] = arrA[time_a-1]+v;
            time_a++;
        }
    }
    int time_b = 1;
    for (int i=0; i<M; i++) {
        int v, t;
        cin >> v >> t;
        while (t--) {
            arrB[time_b] = arrB[time_b-1]+v;
            time_b++;
        }
    }
    int H = 0; // A: 2, B: 1
    int cnt = 0;
    for (int i=1; i<time_a; i++) {
        if (arrA[i] > arrB[i]) {
            if (H == 1) cnt++;
            H = 2;
        } else if (arrA[i] < arrB[i]) {
            if (H == 2) cnt++;
            H = 1;
        }
    }
    cout << cnt;
    return 0;
}