#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i=0; i<4; i++) {
        int sum_val = 0;
        for (int j=0; j<4; j++) {
            int num;
            cin >> num;
            sum_val += num;
        }
        cout << sum_val << endl;
    }
    return 0;
}