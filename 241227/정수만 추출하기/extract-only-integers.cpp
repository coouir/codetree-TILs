#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A, B;
    cin >> A >> B;
    int sum_val=0, i=0;
    for (i=0; i<A.length(); i++) {
        if (!(isdigit(A[i]))) {
            break;
        }
    }
    sum_val += stoi(A.substr(0, i));
    for (i=0; i<B.length(); i++) {
        if (!(isdigit(B[i]))) {
            break;
        }
    }
    sum_val += stoi(B.substr(0, i));
    cout << sum_val;
    return 0;
}