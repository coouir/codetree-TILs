#include <iostream>
using namespace std;

int n, t;
int r, c, dir_num; char d; //U: 1, D: 2, R: 0, L: 3
int dr[4]={0, -1, 1, 0}, dc[4]={1, 0, 0, -1};
bool Check(int x, int y) {
    return ((0<=x && x<n) && (0<=y && y<n));
}

int D(char c) {
    if (c == 'U') return 1;
    else if (c == 'D') return 2;
    else if (c == 'R') return 0;
    else return 3;
}

int main() {
    // Please write your code here.
    cin >> n >> t;
    cin >> r >> c >> d;
    r--;
    c--;
    dir_num = D(d);
    for (int i=0; i<t; i++) {
        int nr = r + dr[dir_num], nc = c + dc[dir_num];
        if (!(Check(nr, nc))) {
            dir_num = 3-dir_num;
        } else {
            r = nr; c = nc;
        }
    }
    cout << r+1 << ' ' << c+1;
    return 0;
}