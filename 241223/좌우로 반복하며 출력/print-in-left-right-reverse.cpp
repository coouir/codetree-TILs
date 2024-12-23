#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        if (i%2 == 0) {
            for (int j=0; j<n; j++) {
                cout << j+1;
            }
        } else {
            for (int j=n; j>0; j--) {
                cout << j;
            } 
        }
        cout << '\n';
    }
    return 0;
}