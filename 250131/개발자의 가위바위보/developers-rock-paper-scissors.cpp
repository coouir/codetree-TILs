#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int a[100], b[100];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> a[i] >> b[i];
    
    // 가위: s
    // 바위: r
    // 보: p
    // s < r
    // s > p
    // r < p

    int max_val = 0;
    for (int s=1; s<=3; s++) {
        for (int r=1; r<=3; r++) {
            for (int p=1; p<=3; p++) {
                if (s == r || r == p || p == s) continue;

                int cnt = 0;
                for (int i=0; i<N; i++) {
                    char p1, p2;
                    if (a[i] == s) p1 = 's';
                    else if (a[i] == r) p1 = 'r';
                    else if (a[i] == p) p1 = 'p';

                    if (b[i] == s) p2 = 's';
                    else if (b[i] == r) p2 = 'r';
                    else if (b[i] == p) p2 = 'p';

                    if ((p1 == 'r' && p2 == 's') || (p1 == 's' && p2 == 'p') || (p1 == 'p' && p2 == 'r')) cnt++;
                }
                max_val = max(max_val, cnt);
            }
        }
    }
    cout << max_val;

    return 0;
}