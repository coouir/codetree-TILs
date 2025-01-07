#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arrA[1000001]={}, arrB[1000001]={};
    int N, M;
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
    int cnt = 0;
    int check = 0; // A: 3, B: 2, A==B: 1
    for (int i=1; i<time_a; i++) {
        if (arrA[i] > arrB[i]) {
            if (check != 3) cnt++;
            check = 3;
        } else if (arrA[i] < arrB[i]) {
            if (check != 2) cnt++;
            check = 2;
        } else {
            if (check != 1) cnt++;
            check = 1;
        }
    }
    cout << cnt;
    return 0;
}