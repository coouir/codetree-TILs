#include <iostream>
using namespace std;

char arr[50][50];
int N, M;

int dx[8]={1, 1, 1, -1, -1, -1, 0, 0}, dy[8]={-1, 0, 1, -1, 0, 1, -1, 1};

bool InRange(int r, int c) {
    return ((0 <= r && r < N) && (0 <= c && c < M));
}

int main() {
    // Please write your code here.
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            if (arr[i][j] == 'L') {
                for (int k=0; k<8; k++) {
                    int x = i;
                    int y = j;
                    bool check = true;
                    for (int m=0; m<2; m++) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if (!(InRange(nx, ny) && arr[nx][ny] == 'E')) {
                            check = false;
                            break;
                        }
                        x = nx; y = ny;
                    }
                    if (check) cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}