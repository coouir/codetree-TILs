#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    for (int i=0; i<2*n; i++) {
        if (i%2 == 0) {
            for (int j=0; j< (0.5*i)+1; j++) {
                cout << "* ";
            }
        } else {
            for (int j=0; j<= (n-0.5)-(0.5*i); j++) {
                cout << "* ";
            }
        }
        cout << '\n';
    }
    return 0;
}

// 0 > 1
// 2 > 2
// 4 > 3
//1/2 (x) + 1

// 1 > 5
// 3 > 4
// -0.5(x-1)+5
// -0.5x +4.5