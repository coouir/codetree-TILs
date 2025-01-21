#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;

    int a2, b2, c2;
    cin >> a2 >> b2 >> c2;

    int cnt = 0;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            for (int k=1; k<=N; k++) {
                if ((abs(a1-i) <= 2 || abs(N-abs(a1-i)) <= 2) && (abs(b1-j) <= 2 || abs(N-abs(b1-j)) <= 2) && (abs(c1-k) <= 2 || abs(N-abs(c1-k)) <= 2)) {
                    cnt++;
                } else if ((abs(a2-i) <= 2 || abs(N-abs(a2-i)) <= 2) && (abs(b2-j) <= 2 || abs(N-abs(b2-j)) <= 2) && (abs(c2-k) <= 2 || abs(N-abs(c2-k)) <= 2)) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    
    return 0;
}

