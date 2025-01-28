#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int a[100], b[100];

    int n, m;
    cin >> n >> m;
    for (int i=0; i<m; i++)
        cin >> a[i] >> b[i];

    int max_val = 0;
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {

            int cnt = 0;
            for (int k=0; k<m; k++) {
                if ((i == a[k] && j == b[k]) || (i == b[k] && j == a[k])) cnt++;
            }
            max_val = max(max_val, cnt);
        }
    } 
    cout << max_val; 
    
    return 0;
}