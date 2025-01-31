#include <iostream>
#include <cstdlib>
using namespace std;

char arr[11][11];

int main() {
    // Please write your code here.
    for (int i=1; i<=10; i++) 
        for (int j=1; j<=10; j++) 
            cin >> arr[i][j];
        
    int xL, yL, xB, yB, xR, yR;
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=10; j++) {
            if (arr[i][j] == 'L') {
                xL = i;
                yL = j;
            } else if (arr[i][j] == 'B') {
                xB = i;
                yB = j;
            } else if (arr[i][j] == 'R') {
                xR = i;
                yR = j;
            }
        }
    }

    if (xL == xB) {
        if (xL == xR) {
            cout << abs(yL - yB) + 1;
        } else {
            cout << abs(yL - yB) - 1;
        }
    } else if (yL == yB) {
        if (yL == yR) {
            cout << abs(xL - xB) + 1;
        } else {
            cout << abs(xL - xB) - 1;
        }
    } else {
        cout << abs(xL - xB) + abs(yL - yB) - 1;
    }
    return 0;
}