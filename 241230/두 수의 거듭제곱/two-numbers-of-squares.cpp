#include <iostream>
using namespace std;

int F(int a, int b) {
    int result = 1;
    for (int i=1; i<=b; i++) result *= a;
    return result;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << F(a, b);
    return 0;
}