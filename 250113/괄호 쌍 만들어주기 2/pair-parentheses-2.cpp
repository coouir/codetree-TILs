#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int cnt = 0;
    for (int i=0; i<str.length()-3; i++) {
        if (str[i] == '(' && str[i+1] == '(') {
            for (int j=i+2; j<str.length()-1; j++) {
                if (str[j] == ')' && str[j+1] == ')') {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}