#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum_val = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        sum_val += num;
    }
    string str = to_string(sum_val);
    cout << str.substr(1) + str.substr(0, 1);
    return 0;
}