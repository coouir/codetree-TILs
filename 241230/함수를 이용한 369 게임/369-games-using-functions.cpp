#include <iostream>
using namespace std;

bool Include369 (int num) {
    while (num > 0) {
        if (num%10 == 3 || num%10 == 6 || num%10 == 9) {
            return true;
        }
        num /= 10;
    }
    return false;
}

bool check(int num) {
    return num%3 == 0 || (Include369(num));
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt=0;
    cin >> a >> b;
    for (int i=a; i<=b; i++) {
        if (check(i)) cnt++;
    }
    cout << cnt;
    return 0;
}