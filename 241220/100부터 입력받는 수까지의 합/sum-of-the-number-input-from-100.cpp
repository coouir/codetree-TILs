#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum_val = 0;
    cin >> n;

    for ( ; n<=100; n++) {
        sum_val += n;
    }

    cout << sum_val;
    return 0;
}