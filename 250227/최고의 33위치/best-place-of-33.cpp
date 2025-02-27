#include <iostream>
#include <algorithm>
using namespace std;

int arr[20][20];

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> arr[i][j];
        }
    }

    int max_val = 0;
    for (int i=0; i<N-2; i++) {
        for (int j=0; j<N-2; j++) {
            max_val = max(max_val, 
                                    arr[i][j] + arr[i][j+1] + arr[i][j+2] + 
                                    arr[i+1][j] + arr[i+1][j+1] + arr[i+1][j+2] + 
                                    arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]);
        }
    }
    cout << max_val;

    return 0;
}