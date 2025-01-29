#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b < c || d < a) {
        cout << (b-a) + (d-c);
    } else if (a <= c && c <= b && b <= d) {
        cout << (b-a) + (d-c) - (b-c);
    } else if (c <= a && a <= d && d <= b) {
        cout << (b-a) + (d-c) - (d-a);
    } else if (a <= c && c <= d && d <= b) {
        cout << b-a;
    } else {
        cout << d-c;
    }
    return 0;
}