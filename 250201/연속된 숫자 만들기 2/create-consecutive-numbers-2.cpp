#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    if (b-a >= c-b) {
        cout << c-b - 1;
    } else {
        cout << b-a - 1;
    }
    
    return 0;
}



// 2   6   9
//     6 8 9
//     6 7 8