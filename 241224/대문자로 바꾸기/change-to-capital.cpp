#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i=0; i<5; i++) {
        for (int j=0; j<3; j++) {
            char c;
            cin >> c;
            cout << char(c-32) << ' ';
        }
        cout << endl;
    }
    return 0;
}