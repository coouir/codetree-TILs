#include <iostream>
using namespace std;

int F(int N) {
    return (N+1)*N/2;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << F(N)/10;
    return 0;
}