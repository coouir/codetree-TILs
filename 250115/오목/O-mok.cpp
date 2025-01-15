#include <iostream>
using namespace std;

int dx[8]={1, 1, 1, -1, -1, -1, 0, 0}, dy[8]={-1, 0, 1, -1, 0, 1, -1, 1};

bool InRange(int r, int c) {
    return ((1 <= r && r <= 19) && (1 <= c && c <= 19));
}

int main() {
    // Please write your code here.
    int arr[20][20];
    for (int i=1; i<=19; i++) {
        for (int j=1; j<=19; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i=1; i<=19; i++) {
        for (int j=1; j<=19; j++) {
            if (arr[i][j] == 0) continue;
            for (int k=0; k<8; k++) {
                int cnt = 1;
                int x = i;
                int y = j;
                while (true) {
                    int nx = x + dx[k];
                    int ny = y + dy[k];
                    if (!InRange(nx, ny)) break;
                    if (arr[nx][ny] == 0) break;
                    x = nx;
                    y = ny;
                    cnt++;
                }    
                if (cnt == 5) {
                    cout << arr[i][j] << endl;
                    cout << i+ 2*dx[k] << ' ' << j+ 2*dy[k];
                    return 0;
                }
            }
        }
    }
    cout << 0;
    return 0;
}