#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age, sum_val = 0, cnt = 0;
    while (true) {
        cin >> age;

        if (20 <= age && age <= 29) {
            sum_val += age;
            cnt++;
        } else {
            cout << fixed;
            cout.precision(2);
            cout << (double) sum_val / cnt;
            break;
        }
    }
    return 0;
}