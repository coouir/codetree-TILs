#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    char c;
    cin >> c;

    if (str.find(c) != string::npos) {
        cout << str.find(c);
    } else {
        cout << "No";
    }
    return 0;
}