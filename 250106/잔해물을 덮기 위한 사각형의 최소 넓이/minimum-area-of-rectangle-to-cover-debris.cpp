#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2001][2001] = {};
    for (int i=0; i<2; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x=x1; x<x2; x++) {
            for (int y=y1; y<y2; y++) {
                arr[x+1000][y+1000] = i+1;
            }
        }
    }
    int minX=2000, maxX=0;
    int minY=2000, maxY=0;
    for (int i=0; i<2001; i++) {
        for (int j=0; j<2001; j++) {
            if (arr[i][j] == 1) {
                if (minX > i) minX = i;
                if (maxX < i) maxX = i;
                if (minY > j) minY = j;
                if (maxY < j) maxY = j;
            }
        }
    }
    cout << (maxX-minX+1)*(maxY-minY+1);
    return 0;
}