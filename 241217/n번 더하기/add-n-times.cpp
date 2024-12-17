#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, n;
    cin >> a >> n;

    for (int i=1; i<=n; i++) {
        cout << a + i*(n) << endl;
    }
    return 0;
}