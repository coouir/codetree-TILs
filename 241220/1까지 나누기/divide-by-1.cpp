#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    cin >> n;

    for (int i=1; i<n; i++) {
        n /= i;
        cnt++;

        if (n <= 1) {
            break;
        }
    }
    cout << cnt+1;
    return 0;
}