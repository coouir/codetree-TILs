#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Please write your code here.
    int X;
    cin >> X;
    cout << (int)(sqrt(X-1) + sqrt(X-1));
    return 0;
}

// Xm
// 1m/s로 시작
// 유지 +1m/s -1m/s
// 1m/s로 종료해야 함

// 거리 = 속도 * 시간
// X번
// 1초

// 3초에서 전환
// v만큼 증가

// 1 // 1                            1*1 = 1
// 4 // 1 2 1                        1*2 + 2*1 = 4 = 1 + 3
// 9 // 1 2 3 2 1                    1*2 + 2*2 + 3*1 = 9 = 4 + 5
// 16// 1 2 3 4 3 2 1                1*2 + 2*2 + 3*2 + 4*1 = 16 = 9 + 7
// 25 // 1 2 3 4 5 4 3 2 1       
// 36 // 1 2 3 4 5 6 5 4 3 2 1