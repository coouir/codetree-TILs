#include <iostream>
using namespace std;

bool F(int num) {
    int check = true;
    for (int i=2; i<num; i++) {
        if (num%i == 0) {
            check = false;
            break;
        }
    }
    return check;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum_val=0;
    cin >> a >> b;

    for (; a<=b; a++) {
        if (F(a) && a != 1) sum_val+=a;
    }
    cout << sum_val;
    return 0;
}