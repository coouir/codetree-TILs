#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0;

    int X, Y;
    cin >> X >> Y;
    for (int i=X; i<=Y; i++) {
        string str = to_string(i);

        int check = true;
        for (int j=0; j<str.length()/2; j++) {
            if (str[j] != str[str.length()-1-j]) {
                check = false;
                break;
            }
        }
        if (check) cnt++;
    }
    cout << cnt;

    return 0;
}