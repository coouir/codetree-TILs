#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << n*n << endl;
    if (n*n < 5) {
        cout << "tiny";
    }
    return 0;
}