#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    char c = 'A';

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << c;
            if (c == 'Z') {
                c = 'A';
            } else {
                c++;
            }
        }
        cout << '\n';
    }
    return 0;
}