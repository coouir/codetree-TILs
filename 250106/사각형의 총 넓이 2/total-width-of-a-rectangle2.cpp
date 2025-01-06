#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, arr[201][201];
    cin >> N;
    for (int i=0; i<N; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x=x1; x<x2; x++) {
            for (int y=y1; y<y2; y++) {
                arr[x][y] = 1;
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