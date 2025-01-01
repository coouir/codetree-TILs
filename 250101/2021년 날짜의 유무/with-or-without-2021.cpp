#include <iostream>
using namespace std;

bool F(int M, int D) {
    if (1 <= M && M <= 12) {
        if (M <= 7) {
            if (M%2 == 1) {
                if (1 <= D && D <= 31) {
                    return true;
                } else {
                    return false;
                }
            } else {
                if (M == 2) {
                    if (1 <= D && D <= 28) {
                        return true;
                    } else {
                        return false;
                    }
                } else {
                    if (1 <= D && D <= 30) {
                        return true;
                    } else {
                        return false;
                    }
                }
            }
        } else {
            if (M%2 == 0) {
                if (1 <= D && D <= 31) {
                    return true;
                } else {
                    return false;
                }
            } else {
                if (1 <= D && D <= 30) {
                        return true;
                    } else {
                        return false;
                    }
            }
        }
    } else {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int M, D;
    cin >> M >> D;
    if (F(M, D)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}