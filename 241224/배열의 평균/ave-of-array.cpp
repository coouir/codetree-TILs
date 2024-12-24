#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(1);

    int arr[2][4], sum=0;
    for (int i=0; i<2; i++) {
        for (int j=0; j<4; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    // 가로 평균
    for (int i=0; i<2; i++) {
        int sum_val = 0;
        for (int j=0; j<4; j++) {
            sum_val += arr[i][j];
        }
        cout << (double)sum_val/4 << ' ';
    }
    cout << endl;
    // 세로 평균
    for (int j=0; j<4; j++) {
        int sum_val = 0;
        for (int i=0; i<2; i++) {
            sum_val += arr[i][j];
        }
        cout << (double)sum_val/2 << ' ';
    }
    cout << endl;
    cout << (double)sum/8;
    return 0;
}