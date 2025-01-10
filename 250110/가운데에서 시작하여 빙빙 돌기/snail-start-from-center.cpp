#include <iostream>
using namespace std;

int n, arr[100][100];
int dr[4]={0, 1, 0, -1}, dc[4]={1, 0, -1, 0};
int dir_num = 2;

bool InRange(int r, int c) {
    return ((0<=r&&r<n) && (0<=c&&c<n));
}

int main() {
    // Please write your code here.
    cin >> n;
    int r = n-1, c = n-1;
    arr[n-1][n-1] = n*n;
    for (int i=2; i<=n*n; i++) {
        int nr = r + dr[dir_num], nc = c + dc[dir_num];
        if (!(InRange(nr, nc)) || arr[nr][nc] != 0) dir_num = (dir_num+1)%4;

        r += dr[dir_num];
        c += dc[dir_num];
        arr[r][c] = n*n -i + 1;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}