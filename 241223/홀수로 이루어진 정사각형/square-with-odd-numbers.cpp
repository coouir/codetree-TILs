#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << 11 + 2*(i+j) << ' ';
        }
        cout << '\n';
    }
    return 0;
}
//    0  1  2  3  4
// 0 11 13 15 17 19
// 1 13 15 17 19 21
// 2 15 17 19 21 23
// 3 17 19 21 23 25
// 4 19 21 23 25 27