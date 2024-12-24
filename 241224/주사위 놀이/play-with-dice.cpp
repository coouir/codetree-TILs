#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt[7] = {0};
    for (int i=0; i<10; i++) {
        int num;
        cin >> num;
        cnt[num]++;
    }

    for (int i=1; i<7; i++) {
        cout << i << " - " << cnt[i] << endl;
    }
    return 0;
}