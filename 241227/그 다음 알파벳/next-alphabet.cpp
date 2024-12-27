#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    cin >> c;
    if (c == 'z') {
        c = 'a';
        cout << c;
    } else {
        cout << (char) c+1;
    }
    return 0;
}