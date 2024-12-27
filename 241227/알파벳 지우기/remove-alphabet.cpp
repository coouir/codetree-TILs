#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A, B, nA="", nB="";
    cin >> A >> B;
    for (int i=0; i<A.length(); i++) {
        if (isdigit(A[i])) {
            nA += A[i];
        }
    }
    for (int i=0; i<B.length(); i++) {
        if (isdigit(B[i])) {
            nB += B[i];
        }
    }
    cout << stoi(nA) + stoi(nB);
    return 0;
}