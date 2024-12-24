#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, arr[3][5], num=1;
    cin >> n >> m;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            arr[i][j] = num++;
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}