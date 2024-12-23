#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num=1;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i%2 == 0) {
                cout << num++ << ' ';
            } else {
                cout << num-- << ' ';
            }
        }
        if (i%2 == 0) {
            num += n-1;
        } else {
            num += n+1;
        } 
        cout << '\n';
    }
    return 0;
}