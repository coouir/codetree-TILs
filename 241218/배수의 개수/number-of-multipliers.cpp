#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt3 = 0,  cnt5 = 0;
    for (int i=0; i<10; i++) {
        int n;
        cin >> n;
        if (n%3 == 0) {
            cnt3++;
        }
        if (n%5 == 0) {
            cnt5++;
        }
    }
    cout << cnt3 << ' ' << cnt5;
    return 0;
}