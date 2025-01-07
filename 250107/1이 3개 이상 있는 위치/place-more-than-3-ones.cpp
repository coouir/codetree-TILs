#include <iostream>
using namespace std;

int n, arr[100][100];

bool check(int x, int y) {
    return (x < n && y < n);
}

int main() {
    // Please write your code here.
    cin >> n;
    int dx[4]={0, 1, 0, -1}, dy[4]={1, 0, -1, 0};
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    int result = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            int cnt = 0;
            for (int k=0; k<4; k++) {
                if (check(i, j) && arr[i+dx[k]][j+dy[k]] == 1) cnt++;
            }
            if (cnt >= 3) result++;
        }
    }
    cout << result;
    return 0;
}