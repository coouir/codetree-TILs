#include <iostream>
using namespace std;

int F(int n) {
    if (n < 10) return n;
    return n%10 + F(n/10);
}

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    cout << F(a*b*c);
    return 0;
}