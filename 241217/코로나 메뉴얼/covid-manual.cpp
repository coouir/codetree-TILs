#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c1, c2, c3;
    int t1, t2, t3, check = 0;

    cin >> c1 >> t1;
    cin >> c2 >> t2;
    cin >> c3 >> t3;

    if (c1 == 'Y' && t1 >= 37) {
        check += 1;
    }
    if (c2 == 'Y' && t2 >= 37) {
        check += 1;
    }
    if (c3 == 'Y' && t3 >= 37) {
        check += 1;
    }

    if (check >= 2) {
        cout << 'E';
    } else {
        cout << 'N';
    }


    return 0;
}