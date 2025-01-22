#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100][2];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i][0] >> arr[i][1];

    int minArea = INT_MAX;
    for (int i=0; i<N; i++) {
        int minX = 40000;
        int maxX = 1;

        int minY = 40000;
        int maxY = 1;
        for (int j=0; j<N; j++) {
            if (i == j) continue;

            minX = min(minX, arr[j][0]);
            maxX = max(maxX, arr[j][0]);
            minY = min(minY, arr[j][1]);
            maxY = max(maxY, arr[j][1]);
        }
        minArea = min(minArea, (maxX-minX)*(maxY-minY));   
    }
    cout << minArea;

    return 0;
}