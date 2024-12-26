#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str = "";

    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        str += s;
    }
    int cnt=0;
    for (int i=0; i<str.length(); i++) {
        cout << str[i];
        cnt++;
        if (cnt == 5) {
            cout << endl;
            cnt = 0;
        }
    }
    return 0;
}