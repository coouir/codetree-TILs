#include <iostream>
using namespace std;

int dx[4]={1, 0, -1, 0}, dy[4]={0, -1, 0, 1};

int D(char c) {
    if (c == 'E') return 0;
    else if (c == 'S') return 1;
    else if (c == 'W') return 2;
    else return 3;
}

int main() {
    // Please write your code here.
    int N, x=0, y=0, time_val = 0;
    cin >> N;
    for (int i=0; i<N; i++) {
        char c; int d;
        cin >> c >> d;
        while(d--) {
            x += dx[D(c)];
            y += dy[D(c)];
            time_val++;
            if (x == 0 && y == 0) {
                cout << time_val;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}