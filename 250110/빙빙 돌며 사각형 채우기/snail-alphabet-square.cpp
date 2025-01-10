#include <iostream>
using namespace std;

int n, m;
char arr[100][100];
int r, c;
int dr[4]={0, 1, 0, -1}, dc[4]={1, 0, -1, 0}, dir_num;

bool InRange(int r, int c) {
    return ((0<=r&&r<n) && (0<=c&&c<m));
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    int cnt = 65;
    arr[r][c] = char(cnt);
    for (int i=2; i<=n*m; i++) {
        int nr = r + dr[dir_num];
        int nc = c + dc[dir_num];
        if (!(InRange(nr, nc)) || arr[nr][nc] != 0) dir_num = (dir_num+1)%4;
        r += dr[dir_num];
        c += dc[dir_num];
        if (cnt+1 == 91) {
            cnt = 65;
            arr[r][c] = char(65);
        } else {
            arr[r][c] = char(++cnt);
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}