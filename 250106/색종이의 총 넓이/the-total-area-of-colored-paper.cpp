#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[201][201] = {};
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int x, y;
        cin >> x >> y;
        for (int j=x; j<x+8; j++) {
            for (int k=y; k<y+8; k++) {
                arr[j+100][k+100] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i=0; i<201; i++) {
        for (int j=0; j<201; j++) {
            if (arr[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}