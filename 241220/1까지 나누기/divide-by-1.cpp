#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    cin >> n;

    for (int i=1; i<5000; i++) {
        n /= i;
        cnt++;
        if (n <= 1) {
            cout << cnt;
            break;
        }
    }
}