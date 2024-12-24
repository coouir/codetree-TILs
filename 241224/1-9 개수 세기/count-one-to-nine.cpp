#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt[10] = {0};
    cin >> n;

    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        cnt[num]++;
    }

    for (int i=1; i<10; i++) {
        cout << cnt[i] << endl;
    }
}