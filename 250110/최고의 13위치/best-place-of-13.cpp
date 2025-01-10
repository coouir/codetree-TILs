#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, arr[20][20];
    cin >> N;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> arr[i][j];
        }
    }
    int M = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N-2; j++) {
            int I = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            if (I > M) M = I;
        }
    }
    cout << M;
    return 0;
}