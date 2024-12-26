#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    cin >> c;
    for (int i=0; i<5; i++) {
        if (arr[i][2] == c || arr[i][3] == c) {
            cout << arr[i] << endl;
            cnt++;
        } 
    }
    cout << cnt;

    return 0;
}