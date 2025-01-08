#include <iostream>
using namespace std;

int arr[100][100], n, m;
int dr[4]={0, 1, 0, -1}, dc[4]={1, 0, -1, 0};

bool InRange(int r, int c) {
    return ((0 <= r && r < n) && (0 <= c && c < m));
}

int main() {
    // Please write your code here.
    arr[0][0]= 1;
    cin >> n >> m;

    int r = 0, c = 0, dir_num = 0;
    for (int i=2; i<=n*m; i++) {
        int nr = r + dr[dir_num];
        int nc = c + dc[dir_num];
        if (!(InRange(nr, nc) && arr[nr][nc] == 0)) {
            dir_num = (dir_num+1)%4;
        }
        r = r+dr[dir_num]; c = c+dc[dir_num];
        arr[r][c]=i;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}