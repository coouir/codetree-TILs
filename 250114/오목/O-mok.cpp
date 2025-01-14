#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[20][20];
    for (int i=1; i<20; i++) {
        for (int j=1; j<20; j++) {
            cin >> arr[i][j];
        }
    }

    // Case 1)
    for (int i=1; i<=19; i++) {
        for (int j=1; j<=15; j++) {
            if (arr[i][j] != 0) {
                if (arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i][j+2] && arr[i][j] == arr[i][j+3] && arr[i][j] == arr[i][j+4]) {
                    cout << arr[i][j] << endl;
                    cout << i << ' ' << j+2;
                    break;
                }
            }
        }
    } 
    // Case 2)
    for (int i=1; i<=15; i++) {
        for (int j=1; j<=19; j++) {
            if (arr[i][j] != 0) {
                if (arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+2][j] && arr[i][j] == arr[i+3][j] && arr[i][j] == arr[i+4][j]) {
                    cout << arr[i][j] << endl;
                    cout << i+2 << ' ' << j;
                    break;
                }
            }
        }
    }
    // Case 3)
    for (int i=1; i<=15; i++) {
        for (int j=1; j<=15; j++) {
            if (arr[i][j] != 0) {
                if (arr[i][j] == arr[i+1][j+1] && arr[i][j] == arr[i+2][j+2] && arr[i][j] == arr[i+3][j+3] && arr[i][j] == arr[i+4][j+4]) {
                    cout << arr[i][j] << endl;
                    cout << i+2 << ' ' << j+2;
                    break;
                }
            }
        }
    }
    // Case 4
    for (int i=1; i<=15; i++) {
        for (int j=5; j<=19; j++) {
            if (arr[i][j] != 0) {
                if (arr[i][j] == arr[i+1][j-1] && arr[i][j] == arr[i+2][j-2] && arr[i][j] == arr[i+3][j-3] && arr[i][j] == arr[i+4][j-4]) {
                    cout << arr[i][j] << endl;
                    cout << i+2 << ' ' << j-2;
                    break;
                }
            }
        }
    }
    return 0;
}