#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    while (true) {
        string str;
        cin >> str;
        if (str == "END") {
            break;
        } else {
            for (int j=0; j<str.length(); j++) {
                cout << str[str.length()-1-j];
            }
        }
        cout << endl;
    }
    return 0;
}