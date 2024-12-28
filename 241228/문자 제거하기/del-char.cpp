#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    int arr[100];
    for (int i=0; i<str.length()-1; i++) {
        // int num;
        // cin >> num;
        // str[num-1] = '.';
        int num;
        cin >> num;
        if (num > str.length()) {
            for (int j=0; j<str.length(); j++) {
                if (str[str.length()-1-j] != '.') {
                    str[str.length()-1-j] = '.';
                    break;
                }
            }
        } else {
            str[num] = '.';
        }
        for (int j=0; j<str.length(); j++) {
            if (str[j] != '.') {
                cout << str[j];
            }
        }
        cout << endl;
    }
}