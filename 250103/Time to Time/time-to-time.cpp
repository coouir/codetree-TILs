#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int s = a*60+b;
    int e = c*60+d;
    cout << e-s;
    return 0;
}