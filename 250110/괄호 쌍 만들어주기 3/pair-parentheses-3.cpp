#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int cnt = 0;
    for (int i=0; i<str.length(); i++) {
        for (int j=i+1; j<str.length(); j++) {
            if (str[i] == '(' && str[j] == ')') cnt++;
        }
    }
    cout << cnt;
    return 0;
}