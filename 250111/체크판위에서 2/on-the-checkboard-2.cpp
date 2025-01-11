#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int R, C; char arr[15][15];
    cin >> R >> C;
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    char c = arr[0][0];
    for (int i=1; i<R-1; i++) {
        for (int j=1; j<C-1; j++) {
            if (arr[i][j] != c) {
                char arrIJ = arr[i][j];
                for (int k=i+1; k<R-1; k++) {
                    for (int m=j+1; m<C-1; m++) {
                        if (arr[k][m] != arrIJ) {
                            char arrKM = arr[k][m];
                            if (arrKM != arr[R-1][C-1]) cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt; 
    return 0;
}