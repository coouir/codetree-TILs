#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int x1[100], x2[100];

    int n;
    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> x1[i] >> x2[i];
    
    int ans = 100;
    for (int i=0; i<n; i++) {
        int max_x = 0;
        int min_x = 100;
        for (int j=0; j<n; j++) {
            if (i == j) continue;
            min_x = min(min_x, x1[j]);
            max_x = max(max_x, x2[j]);
        }
        ans = min(ans, max_x - min_x);
    }
    cout << ans;
    
    return 0;
}