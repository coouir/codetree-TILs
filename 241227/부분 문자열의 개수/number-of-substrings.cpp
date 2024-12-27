#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;

    string strA, strB; 
    cin >> strA >> strB;
    for (int i=0; i<strA.length()-strB.length()+1; i++) {
        bool check = true;
        for (int j=0; j<strB.length(); j++) {
            if (strA[i+j] != strB[j]) {
                check = false;
                break;
            }
        }
        if (check) cnt++;
    }
    cout << cnt;
    return 0;
}