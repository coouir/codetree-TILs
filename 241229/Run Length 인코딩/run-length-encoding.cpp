#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str, result="";
    cin >> str;
    for (int i=0; i<str.length(); i++) {
        int cnt = 1;
        for (int j=i+1; j<str.length(); j++) {
            if (str[i] == str[j]) {
                cnt++;
            } else {
                break;
            }
        }
        if (i == 0 || result[result.length()-2] != str[i]) {
            result += (str[i]+to_string(cnt));
        }
    }
    cout << result.length() << endl;
    cout << result;
    return 0;
}