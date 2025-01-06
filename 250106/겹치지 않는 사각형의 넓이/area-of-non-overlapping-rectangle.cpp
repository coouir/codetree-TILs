#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2001][2001] = {};
    int x1A, y1A, x2A, y2A;
    cin >> x1A >> y1A >> x2A >> y2A;
    for (int i=x1A; i<x2A; i++) {
        for (int j=y1A; j<y2A; j++) {
            arr[i+1000][j+1000] = 1;
        }
    }
    int x1B, y1B, x2B, y2B;
    cin >> x1B >> y1B >> x2B >> y2B;
    for (int i=x1B; i<x2B; i++) {
        for (int j=y1B; j<y2B; j++) {
            arr[i+1000][j+1000] = 1;
        }
    }
    int x1M, y1M, x2M, y2M;
    cin >> x1M >> y1M >> x2M >> y2M;
    for (int i=x1M; i<x2M; i++) {
        for (int j=y1M; j<y2M; j++) {
            arr[i+1000][j+1000] = 0;
        }
    }
    int cnt = 0;
    for (int i=0; i<2001; i++) {
        for (int j=0; j<2001; j++) {
            if (arr[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}