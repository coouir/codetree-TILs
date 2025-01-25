#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int a[100], b[100], c[100];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> a[i] >> b[i] >> c[i];
    
    int max_val = 0;
    for (int k=1; k<=3; k++) {
        int cnt = 0;
        int index = k;
        for (int i=0; i<N; i++) {
            if (index == a[i]) {
                index = b[i];
            } else if (index == b[i]) {
                index = a[i];
            }
            if (index == c[i]) cnt++;
        }
        max_val = max(max_val, cnt);
    }
    cout << max_val;

    return 0;
}


// 3개의 종이컵
// 