#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a;
    cin >> a;
    a += 1.5;

    cout << fixed;
    cout.precision(2);

    cout << a;
    return 0;
}