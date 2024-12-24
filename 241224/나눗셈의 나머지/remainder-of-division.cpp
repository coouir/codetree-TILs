#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, arr[10] = {0};
    cin >> a >> b;

    while (a>=1) {
        arr[a%b]++; 
        a /= b;
    }
    int sum_val = 0;
    for (int i=0; i<10; i++) {
        sum_val += arr[i]*arr[i];
    }

    cout << sum_val;
    return 0;
}