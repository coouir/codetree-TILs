#include <iostream>
using namespace std;

int n, m, arr[100][100];
int r, c, dir_num = 1;
int dr[4]={0, 1, 0, -1}, dc[4]={1, 0, -1, 0};

bool InRange(int r, int c) {
    return ((0<=r&&r<n) && (0<=c&&c<m));
}

int main() {
    // Please write your code here.
    arr[r][c] = 1;
    cin >> n >> m;
    for (int i=2; i<=n*m; i++) {
        int nr = r + dr[dir_num];
        int nc = c + dc[dir_num];
        if (!(InRange(nr, nc)) || arr[nr][nc] != 0) {
            dir_num = (dir_num+3)%4;
        }
        r += dr[dir_num];
        c += dc[dir_num];
        arr[r][c] = i;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}