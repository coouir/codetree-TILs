#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, arr[10][10]={};
    cin >> n >> m;

    for (int i=0; i<m; i++) {
        int r, c;
        cin >> r >> c;
        arr[r][c] = 1;
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}