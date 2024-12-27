#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int n;
    cin >> str >> n;

    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        if (num == 1) {
            str = str.substr(1) + str.substr(0, 1);
        } else if (num == 2) {
            str = str.substr(str.length()-1) + str.substr(0, str.length()-1);
        } else if (num == 3) {
            string s = "";
            for (int j=0; j<str.length(); j++) {
                s += str[str.length()-1-j];
            }
            str = s;
        }
        cout << str << endl; 
    }
    return 0;
}