#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int w, h;
    char c;

    while (true) {
        cin >> w >> h >> c;

        cout << w*h << endl;
        if (c == 'C') break;
    }
    return 0;
}