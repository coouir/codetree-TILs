#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    bool check = true;
    string A, B;
    cin >> A >> B;
    for (int i=0; i<A.length()-1; i++) {
        A = A.substr(A.length()-1) + A.substr(0, A.length()-1);
        if (A == B) {
            cout << i+1;
            check = false;
        }

    }
    if (check) cout << -1;
    return 0;
}