#include <iostream>
using namespace std;

int arr[100][100];
int N, M;
int dr[4]={0, 1, 0, -1}, dc[4]={1, 0, -1, 0};

bool InRange(int r, int c) {
    return ((0<=r && r<N) && (0<=c && c<N));
}

int main() {
    // Please write your code here.
    cin >> N >> M;
    for (int i=0; i<M; i++) {
        int r, c;
        cin >> r >> c;
        r--; c--;
        arr[r][c] = 1;
        int check = 0;
        for (int j=0; j<4; j++) {
            int nr = r + dr[j], nc = c + dc[j];
            if (InRange(nr, nc) && arr[nr][nc] == 1) check++;
        }
        cout << (check == 3 ? 1 : 0) << endl;
    }
    return 0;
}