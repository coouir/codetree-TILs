#include <iostream>
using namespace std;

bool check (int num) {
    if (num%2 == 0) {
        return false;
    }
    if (num%10 == 5) {
        return false;
    }
    if (num%3 == 0 && num%9 != 0) {
        return false;
    }
    return true;
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