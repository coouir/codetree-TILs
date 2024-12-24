#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2;
    cin >> str1 >> str2;
    int len_str1 = str1.length(), len_str2 = str2.length();
    if (len_str1 > len_str2) {
        cout << str1 << ' ' << len_str1;
    } else if (len_str1 == len_str2) {
        cout << "same";
    } else {
        cout << str2 << ' ' << len_str2;
    }
    return 0;
}