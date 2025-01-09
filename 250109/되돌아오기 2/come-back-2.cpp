#include <iostream>
#include <string>
using namespace std;

int x, y, dir_num = 3, ans = -1;
int dx[4]={1, 0, -1, 0}, dy[4]={0, -1, 0, 1};

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    for (int i=0; i<str.length(); i++) {
        if (str[i] == 'L') {
            dir_num = (dir_num+3)%4;
        } else if (str[i] == 'R') {
            dir_num = (dir_num+1)%4;
        } else {
            x += dx[dir_num];
            y += dy[dir_num];
        }
        if (x == 0 && y == 0) ans = (i+1);
    }
    cout << ans;
    return 0;
}