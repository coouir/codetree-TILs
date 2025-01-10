#include <iostream>
#include <string>
using namespace std;

int N, T, arr[100][100];
string str;
int dr[4]={0, 1, 0, -1}, dc[4]={1, 0, -1, 0};
int r, c, dir_num = 3;

bool InRange(int r, int c) {
    return ((0<=r&&r<N) && (0<=c&&c<N));
}

int main() {
    // Please write your code here.
    cin >> N >> T >> str;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> arr[i][j];
        }
    }
    
    r = N/2, c = N/2;
    int sum_val = arr[r][c];
    for (int i=0; i<str.length(); i++) {
        if (str[i] == 'L') {
            dir_num = (dir_num+3)%4;
        } else if (str[i] == 'R') {
            dir_num = (dir_num+1)%4;
        } else {
            int nr = r + dr[dir_num], nc = c + dc[dir_num];
            if (InRange(nr, nc)) {
                r += dr[dir_num];
                c += dc[dir_num];
                sum_val += arr[r][c];
            }
        }
    }
    cout << sum_val;
    return 0;
}