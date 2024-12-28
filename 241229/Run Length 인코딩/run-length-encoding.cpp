#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A, result = "";
    cin >> A;

    char c = A[0];
    int cnt = 1;
    for (int i=1; i<A.length(); i++) {
        if (A[i] == c) {
            cnt++;
        } else {
            result += c;
            result += to_string(cnt);
            c = A[i];
            cnt = 1;
        }
    }
    result += c;
    result += to_string(cnt);
    cout << result.length() << endl;
    cout << result;
    return 0;
}