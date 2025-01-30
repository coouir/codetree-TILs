#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int member[26] = {};

    char c[100];
    int u[100];

    int n, m, p;
    cin >> n >> m >> p;

    for (int i=0; i<m; i++) 
        cin >> c[i] >> u[i];
    
    if (u[p-1] == 0) return 0;
    
    for (int i=p-1; i<m; i++) {
        member[c[i] - 65] = 1;
    }

    for (int i=0; i<n; i++) {
        if (member[i] == 0) cout << (char) (i+65) << ' ';
    }
    return 0;
}