#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x = 0, y = 0;
    int dx[4] = {1, 0, -1, 0}, dy[4]={0, -1, 0, 1};
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        char c; int d;
        cin >> c >> d;
        if (c == 'E') {
            x += (dx[0])*d; 
            y += (dy[0])*d;
        } else if (c == 'S') {
            x += (dx[1])*d; 
            y += (dy[1])*d;
        } else if (c == 'W') {
            x += (dx[2])*d; 
            y += (dy[2])*d;
        } else {
            x += (dx[3])*d; 
            y += (dy[3])*d;
        }
    }
    cout << x << ' ' << y;
    return 0;
}