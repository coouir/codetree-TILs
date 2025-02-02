#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int x1, y1, x2, y2;
    int a1, b1, a2, b2;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    x1 = min(x1, a1);
    y1 = min(y1, b1);
    x2 = max(x2, a2);
    y2 = max(y2, b2);

    if ((x2-x1) >= (y2-y1)) {
        cout << (x2-x1) * (x2-x1);
    } else {
        cout << (y2-y1) * (y2-y1);
    }
    return 0;
}