#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, M, arrA[1001]={0}, arrB[1001]={0}, sum_t=0;
    cin >> N >> M;
    int tA = 1;
    for (int i=0; i<N; i++) {
        char d; int t;
        cin >> d >> t;
        sum_t += t;
        if (d == 'L') {
            for (int j=0; j<t; j++) {
                arrA[tA] = arrA[tA-1]-1;
                tA++;
            }
        } else {
            for (int j=0; j<t; j++) {
                arrA[tA] = arrA[tA-1]+1;
                tA++;
            }
        }
    }
    int tB = 1;
    for (int i=0; i<M; i++) {
        char d; int t;
        cin >> d >> t;
        if (d == 'L') {
            for (int j=0; j<t; j++) {
                arrB[tB] = arrB[tB-1]-1;
                tB++;
            }
        } else {
            for (int j=0; j<t; j++) {
                arrB[tB] = arrB[tB-1]+1;
                tB++;
            }
        }
    }
    int result = -1;
    for (int i=1; i<sum_t; i++) {
        if (arrA[i] == arrB[i]) {
            result = i;
            break;
        }
    }
    cout << result;
    return 0;
}