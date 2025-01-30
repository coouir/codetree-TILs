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
    
    // for (int i=0; i<m; i++) {
    //     for (int j=0; j<n; j++) {
    //         cout << member[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    if (p != 0) {
        int index = p;
        for (int i=p-1; i>=0; i--) {
            if (u[i] == u[p]) index = i;
            else break;
        }

        for (int i=0; i<n; i++) {
            if (member[index][i] == 0) cout << (char) (i+65) << ' ';
        }
    } else {
        for (int i=0; i<n; i++) {
            if (member[0][i] == 0) cout << (char) (i+65) << ' ';
        }
    }

    return 0;
}

// A B C D E F

// D 0 A B C D E F
// C 1 C B A F         D E 
// B 2 B A F           C D E
// B 2 B A F           C D E
// A 2 A F             B C D E
// F 4 F               A B C D E F