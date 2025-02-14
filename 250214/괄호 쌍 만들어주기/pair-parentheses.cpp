#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    int suffix[110000] = {};

    for (int i=(int)str.size()-1; i>=0; i--) {
        if (str[i] == ')' && str[i+1] == ')') {
            suffix[i] = suffix[i+1] + 1;
        } else {
            suffix[i] = suffix[i+1];
        }
    }

    long long cnt = 0;
    for (int i=0; i<(int)str.size()-1; i++) {
        if (str[i] == '(' && str[i+1] == '(') {
            cnt += suffix[i+2];
        }
    }
    cout << cnt;

    return 0;
}