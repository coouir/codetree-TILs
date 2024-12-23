#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i=0; i<2*n; i++) {
        if (i%2 == 0) {
            for (int j=0; j<-0.5*i+n; j++) {
                cout << "* ";
            }
        } else {
            for (int j=0; j<0.5*i + 0.5; j++) {
                cout << "* ";
            }
        }
        cout << '\n'; 
    }
    return 0;
}

// 0 > 4
// 2 > 3
// -0.5x+ 4

// 1 > 1
// 3 > 2
// 0.5 (x-1)+1
// 0.5x + 0.5