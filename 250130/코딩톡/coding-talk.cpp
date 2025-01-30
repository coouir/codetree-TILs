#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int member[100][26] = {};

    char c[100];
    int u[100];

    int n, m, p;
    cin >> n >> m >> p;

    p--;

    for (int i=0; i<m; i++) 
        cin >> c[i] >> u[i];
    
    for (int i=0; i<=p; i++) {
        if (u[i] == 0) {
            for (int j=0; j<n; j++) member[i][j] = 1;  
        } else {
            for (int j=i; j<m; j++) member[i][c[j]-65] = 1;  
        }
    }

    int index = p;
    for (int i=p-1; i>=0; i--) {
        if (u[i] == u[p]) index = i;
        else break;
    }

    for (int i=0; i<n; i++) {
        if (member[index][i] == 0) cout << (char) (i+65) << ' ';
    }

    return 0;
}