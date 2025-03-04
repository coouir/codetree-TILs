#include <iostream>
using namespace std;

int main() {
    int arr[20][20];
    for (int i=1; i<20; i++) {
        for (int j=1; j<20; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Case 1)
    for (int i=1; i<=19; i++) {
        for (int j=1; j<=15; j++) {
            if (arr[i][j] != 0) {
                if (arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i][j+2] && arr[i][j] == arr[i][j+3] && arr[i][j] == arr[i][j+4]) {
                    printf("%d\n%d %d", arr[i][j], i, j+2);
                    return 0;
                }
            }
        }
    } 
    // Case 2)
    for (int i=1; i<=15; i++) {
        for (int j=1; j<=19; j++) {
            if (arr[i][j] != 0) {
                if (arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+2][j] && arr[i][j] == arr[i+3][j] && arr[i][j] == arr[i+4][j]) {
                    printf("%d\n%d %d", arr[i][j], i+2, j);
                    return 0;
                }
            }
        }
    }
    // Case 3)
    for (int i=1; i<=15; i++) {
        for (int j=1; j<=15; j++) {
            if (arr[i][j] != 0) {
                if (arr[i][j] == arr[i+1][j+1] && arr[i][j] == arr[i+2][j+2] && arr[i][j] == arr[i+3][j+3] && arr[i][j] == arr[i+4][j+4]) {
                    printf("%d\n%d %d", arr[i][j], i+2, j+2);
                    return 0;
                }
            }
        }
    }
    // Case 4
    for (int i=1; i<=15; i++) {
        for (int j=5; j<=19; j++) {
            if (arr[i][j] != 0) {
                if (arr[i][j] == arr[i+1][j-1] && arr[i][j] == arr[i+2][j-2] && arr[i][j] == arr[i+3][j-3] && arr[i][j] == arr[i+4][j-4]) {
                    printf("%d\n%d %d", arr[i][j], i+2, j-2);
                    return 0;
                }
            }
        }
    }  
    cout << 0;
    return 0;
}