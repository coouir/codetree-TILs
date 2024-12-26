#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string strA, strB;
    cin >> strA >> strB;
    if (strA+strB == strB+strA) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}