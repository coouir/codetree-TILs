#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (j<i || i == 0 || j == n-1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << '\n';
    }

    return 0;
}
//   0 1 2 3 4 5
// 0 * * * * * *
// 1 *         *
// 2 * *       *
// 3 * * *     *
// 4 * * * *   *
// 5 * * * * * *