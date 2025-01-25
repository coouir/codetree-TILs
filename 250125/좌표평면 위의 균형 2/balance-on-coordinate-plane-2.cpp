#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int x[100], y[100];

    int N;
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> x[i] >> y[i];
    
    int min_val = 1 << 30;
    for (int i=2; i<=100; i+=2) { // x
        for (int j=2; j<=100; j+=2) { // y
            int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
            for (int k=0; k<N; k++) {
                if (x[k] > i && y[k] > j) cnt1++;
                else if (x[k] < i && y[k] > j) cnt2++;
                else if (x[k] < i && y[k] < j) cnt3++;
                else cnt4++;
            }
            min_val = min(min_val, max(cnt1, max(cnt2, max(cnt3, cnt4))));
        }
    }
    cout << min_val;
    
    return 0;
}