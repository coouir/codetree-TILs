#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double ft = 30.48;
    double n;
    cin >> n;

    cout << fixed;
    cout.precision(1);

    cout << n*ft;

    return 0;
}