#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr;
    cin >> arr;
    for (int i=0; arr[i] != '\0'; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}