#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, arr[1000][1000], num=1;
    cin >> n >> m;
    
    for (int j=0; j<m+(n-1); j++) {
        for (int i=0; i<n; i++) {
            if (0<=j-i && j-i < m) arr[i][j-i] = num++;
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