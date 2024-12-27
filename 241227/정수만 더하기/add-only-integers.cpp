#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum_val = 0;
    string A;
    cin >> A; 
    for (int i=0; i<A.length(); i++) {
        if (A[i] >= '0' && A[i] <= '9') {
            sum_val += (int)A[i]-'0';
        }
    }
    cout << sum_val;
    return 0;
}