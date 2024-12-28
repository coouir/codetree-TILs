#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int len = str.length();
    for (int i=0; i<len-1; i++) {
        int num;
        cin >> num;
        if (num >= str.length()) {
            str.erase(str.length()-1, 1);
        } else {
            str.erase(num, 1);   
        }
        cout << str << endl;
    }
    return 0;
}