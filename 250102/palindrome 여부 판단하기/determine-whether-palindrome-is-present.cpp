#include <iostream>
#include <string>
using namespace std;

bool F(string &str) {
    bool check = true;
    for (int i=0; i<(str.length())/2; i++) {
        if (str[i] != str[str.length()-1-i]) {
            check = false;
            break;
        }
    } 
    return check;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    if (F(str)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}