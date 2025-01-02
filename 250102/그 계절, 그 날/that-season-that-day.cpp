#include <iostream>
using namespace std;

int LastDayNumber(int y, int m) {
    if(m == 2) {
        if (y%4 == 0) {
            if (y%100 == 0 && y%400 == 0) {
                return 29;
            }
            if (y%100 == 0) {
                return 28;
            }
            return 29;
        } else {
            return 28;
        }
    }
    if(m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    
    return 31;
}

bool JudgeDay(int y, int m, int d) {
    if(m <= 12 && d <= LastDayNumber(y, m))
        return true;
    
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int Y, M, D;
    cin >> Y >> M >> D;

    if (JudgeDay(Y, M, D)) {
        if (M <= 2 || M == 12) {
            cout << "Winter";
        } else if (M <= 5) {
            cout << "Spring";
        } else if (M <= 8) {
            cout << "Summer";
        } else {
            cout << "Fall";
        }
    } else {
        cout << -1;
    }
    return 0;
}