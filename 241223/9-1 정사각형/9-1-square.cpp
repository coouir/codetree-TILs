#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num=9;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << num--;
            if (num == 0) {
                num = 9;
            }
        }
        cout << '\n';
    }
    return 0;
}