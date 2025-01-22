#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100][2];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i][0] >> arr[i][1];
    
    int cnt = 0;
    for (int i=0; i<N; i++) {
        int check = true;
        for (int j=0; j<N; j++) {
            if (i == j) continue;

            int x1 = arr[i][0];
            int x2 = arr[i][1];
            int x3 = arr[j][0];
            int x4 = arr[j][1];

            if (x1 <= x2) {
                if (x3 < x1 && x4 < x2) {
                    continue;
                } else if (x1 < x3 && x2 < x4) {
                    continue;
                }
            } else {
                if (x4 < x2 && x3 < x1) {
                    continue;
                } else if (x2 < x4 && x1 < x3) {
                    continue;
                }
            }
            
            check = false;
            break;
        }
        if (check) cnt++;
    }
    cout << cnt;
    
    return 0;
}