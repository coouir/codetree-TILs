#include <iostream>
#include <string>
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
    cout << str;
    return 0;
}