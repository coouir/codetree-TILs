#include <iostream>
#include <algorithm>
using namespace std;

int MinF(int a, int b, int c) {
    return min(a, min(b, c));
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    cout << MinF(a, b, c);
    return 0;
}