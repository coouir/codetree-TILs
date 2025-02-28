#include <iostream>
#include <algorithm>
using namespace std;


int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int N, M;
int arr[200][200];

bool InRange(int x, int y) {
    return((0 <= x && x < N) && (0 <= y && y < M));
}

int main() {
    // Please write your code here.
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> arr[i][j];
        }
    }

    int max_val = 0;

    // Case 1)
    for (int i=0; i<N-1; i++) {
        for (int j=0; j<M-1; j++) {
            int sum_val = arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1];
            int min_val = min(arr[i][j], min(arr[i][j+1], min(arr[i+1][j], arr[i+1][j+1])));

            max_val = max(max_val, sum_val-min_val);
        }
    }

    // Case 2)
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {

            int x1 = i;
            int y1 = j;
            for (int k=0; k<4; k++) {
                int x2 = x1 + dx[k];
                int y2 = y1 + dy[k];

                int x3 = x2 + dx[k];
                int y3 = y2 + dy[k];

                if (InRange(x2, y2) && InRange(x3, y3)) {
                    max_val = max(max_val, arr[x1][y1] + arr[x2][y2] + arr[x3][y3]);
                }
            }
        }
    }
    cout << max_val;

    return 0;
}