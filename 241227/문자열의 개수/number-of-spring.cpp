#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0, i=0, j=0;
    string arr[200];
    for (int i=0; i<200; i++) {
        string str;
        cin >> str;
        if (str == "0") break;
        if (i%2==0) {
            arr[j] = str;
            j++;
        }
        cnt++;
    }
    cout << cnt << endl;
    for (int i=0; i<j; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}