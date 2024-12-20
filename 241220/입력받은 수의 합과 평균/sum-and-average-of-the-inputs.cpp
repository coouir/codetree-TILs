#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num, sum_val=0, cnt=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> num;
        sum_val += num;
        cnt++;
    }
    cout.fixed;
    cout.precision(1);
    cout << sum_val << ' ' << (double) sum_val/num;
    return 0;
}