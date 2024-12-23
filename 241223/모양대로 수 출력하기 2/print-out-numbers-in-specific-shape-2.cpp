#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 2;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << cnt << ' ';
            cnt += 2;
            if (cnt == 10) cnt = 2;
        }
        cout << '\n';
    }
    return 0;
}