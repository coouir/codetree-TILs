#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    if (b-a == 1 && c-b == 1) {
        cout << 0;
    } else {
        if (b-a > c-b) {
            cout << b-a - 1;
        } else {
            cout << c-b - 1;
        }
    }
    return 0;
}


// 1   2   4
// 1   2   3   4
// 1   2       4
//     2   3   4

// 2   6   9
// 1   2   3   4   5   6   7   8   9
//     2               6           9
//     2           5   6
//     2       4   5
//     2   3   4

// 1   5   6
// 1   2   3   4   5   6  
// 1               5   6
// 1           4   5
// 1       3   4
// 1   2   3