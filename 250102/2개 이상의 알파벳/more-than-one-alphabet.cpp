#include <iostream>
#include <string>
using namespace std;

bool F(string &str) {
    for (int i=1; i<str.length(); i++) {
        if (str[0] != str[i]) return true;
    }
    return false;
}

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    cout << (F(str) == true ? "Yes" : "No");
    return 0;
}