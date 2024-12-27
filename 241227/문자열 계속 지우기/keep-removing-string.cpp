#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string strA, strB;
    cin >> strA >> strB;
    
    while (strA.find(strB) != string::npos) {
        strA.erase(strA.find(strB), strB.length());
    }
    cout << strA;
    return 0;
}