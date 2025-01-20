#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[20][20];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> arr[i][j];
        }
    }

    int max_val = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N-2; j++) {
            for (int k=0; k<N; k++) {
                for (int l=0; l<N-2; l++) {
                    if (i == k && ((j == l || j+1 == l || j+2 == l) || (j == l || j == l+1 || j == l+2))) continue;
                    max_val = max(max_val, arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[k][l] + arr[k][l+1] + arr[k][l+2]);
                }
            }
        }
    }
    cout << max_val;

    return 0;
}