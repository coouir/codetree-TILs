#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, prod = 1;
    cin >> a >> b;
    for (; a<=b; a++) {
        prod *= a;
    }
    cout << prod;
    return 0;
}