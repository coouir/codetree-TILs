#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        if (str[str.length()-1-i] == '\0') break;
        cout << str[str.length()-1-i];
    }
    return 0;
}