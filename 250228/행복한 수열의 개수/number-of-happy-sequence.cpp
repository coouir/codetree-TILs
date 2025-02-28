#include <iostream>
using namespace std;

int arr[100][100];

int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = 0;

    // 행
    for (int i=0; i<N; i++) {
        for (int j=0; j<N-M+1; j++) {

            bool check = true;
            for (int k=j; k<j+M; k++) {
                if (arr[i][j] != arr[i][k]) check = false;
            }

            if (check) {
                ans++;
                break;
            } 
        }
    }

    // 열
    for (int j=0; j<N; j++) {
        for (int i=0; i<N-M+1; i++) {

            bool check = true;
            for (int k=i; k<i+M; k++) {
                if (arr[i][j] != arr[k][j]) check = false;
            }

            if (check) {
                ans++;
                break;
            }
        }
    }
    
    cout << ans;

    return 0;
}