#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1, y1, x2, y2;
    int a1, b1, a2, b2;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (b2 < y1 || a2 < x1 || b1 > y2 || x2 < a1) {
        cout << "nonoverlapping";
    } else {
        cout << "overlapping";
    }
    return 0;
}