#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    int cntEE = 0, cntEB = 0;
    for (int i = 0; i < str.length() - 1; i++) {
		if(str.substr(i, 2) == "ee") {
			cntEE++;
		}
        if(str.substr(i, 2) == "eb") {
            cntEB++;
        }
	}

    cout << cntEE << ' ' << cntEB;

    return 0;
}