#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], cnt=0, sum_val=0;
    for (int i=0; i<10; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            break;
        } else if (arr[i]%2 == 0) {
            cnt++;
            sum_val += arr[i];
        }
    }
    cout << cnt << " " << sum_val;
    return 0;
}