#include <iostream>
using namespace std;

int F(int N) {
    return N/2*(N+1)/10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}