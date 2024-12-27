#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string strA, C;
    cin >> strA >> C;

    for (int i=0; i<C.length(); i++) {
        if (C[i] == 'L') {
            strA = strA.substr(1) + strA.substr(0, 1);
        } else if (C[i] == 'R') {
            strA = strA.substr(strA.length()-1) + strA.substr(0, strA.length()-1);
        }
    }
    cout << strA;
    return 0;
}