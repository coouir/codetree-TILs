#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end, cnt = 0;
    cin >> start >> end;

    for (; start<=end; start++) {
        int sum_val = 0;
        for (int i=1; i<start; i++) {
            if (start%i == 0) {
                sum_val += i;
            }
        }
        if (sum_val == start) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}