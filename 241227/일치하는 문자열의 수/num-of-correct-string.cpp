#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    string str;
    cin >> n >> str;
    
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        if (str == s) cnt++;
    }
    cout << cnt;
    return 0;
}