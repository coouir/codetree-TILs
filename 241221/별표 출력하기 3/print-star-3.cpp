#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            cout << "  ";
        }
        for (int k=0; k<-2*i+(2*n-1); k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

//B
// 0 -> 0
// 1 -> 1
// 0 -> 2

//S, n=3
// 0 -> 5
// 1 -> 3
// -2(x) + 5 = -2x+5

//S, n=2
// 0 -> 3
// 1 -> 1
// -2x+3

// n=2 -> 3
// n=3 -> 5
// 2(n-2)+3
// 2n-4+3 = 2n-1