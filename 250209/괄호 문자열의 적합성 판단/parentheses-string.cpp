#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    stack<char> s;

    string str;
    cin >> str;

    for (int i=0; i<str.length(); i++) {
        if (s.empty() || !(s.top() == '(' && str[i] == ')')) {
            s.push(str[i]);
        } else {
            s.pop();
        }
    }
    cout << (s.empty() ? "Yes" : "No");

    return 0;
}