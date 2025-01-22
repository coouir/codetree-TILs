#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100][2];

    int N;
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> arr[i][0] >> arr[i][1];
    
    int max_val = 0;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            for (int k=j+1; k<N; k++) {
                int x1 = arr[i][0]; int y1 = arr[i][1];
                int x2 = arr[j][0]; int y2 = arr[j][1];
                int x3 = arr[k][0]; int y3 = arr[k][1];

                if (!((x1 - x2 == 0) || (x2 - x3 == 0) || (x1 - x3 == 0))) continue;
                if (!((y1 - y2 == 0) || (y2 - y3 == 0) || (y1 - y3 == 0))) continue;
                max_val = max(max_val, abs((x1*y2 + x2*y3 + x3*y1) - (x2*y1 + x3*y2 + x1*y3)));
            }
        }
    }
    cout << max_val;

    return 0;
}