#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, x, y;
    cin >> A >> B >> x >> y;

    int min_val = 1 << 30;
    
    // Case 1)
    min_val = min(min_val, abs(B-A));
    
    // Case 2)
    min_val = min(min_val, abs(x-A) + abs(B-y));

    // Case 3)
    min_val = min(min_val, abs(y-A) + abs(B-x));

    cout << min_val;
    
    return 0;
}

// 순간이동
// X > Y
// Y > X

// A > B
// A > X > Y > B
// A > Y > X > B