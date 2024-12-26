#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[10];

    int n, cnt=0, cntA=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        cnt += arr[i].length();
        if (arr[i][0] == 'a') cntA++;
    }
    cout << cnt << ' ' << cntA;
    return 0;
}