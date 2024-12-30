#include <iostream>
using namespace std;

bool F(int num) {
    bool check = true;
    for (int i=2; i<num; i++) {
        if(num%i == 0) {
            check = false;
            break;
        }
    }
    if (check) {
        int sum_val = 0;
        while (num > 0) {
            sum_val += num%10;
            num /= 10;
        }
        if (sum_val%2 == 0) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt=0;
    cin >> a >> b;
    for (int i=a; i<=b; i++) {
        if (F(i)) cnt++;
    }
    cout << cnt;
    return 0;
}