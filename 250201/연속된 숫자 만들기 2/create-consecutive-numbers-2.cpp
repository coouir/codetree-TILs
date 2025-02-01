#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    if (b-a == 1 && c-b == 1) {
        cout << 0;
    } else if (c-b == 2 || b-a == 2) {
        cout << 1;
    } else {
        cout << 2;
    }

    return 0;
}
// 2   6   9
// 1   4   10

// 4-1 = 3
// 10-4 = 