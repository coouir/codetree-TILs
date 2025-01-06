#include <iostream>
using namespace std;

int main() { // 빨간색: 2, 파란색: 1 
    // Please write your code here.
    int arr[201][201] = {};
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x=x1; x<x2; x++) {
            for (int y=y1; y<y2; y++) {
                if (i%2 == 0) {
                    arr[x+100][y+100] = 2;
                } else {
                    arr[x+100][y+100] = 1;
                }
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