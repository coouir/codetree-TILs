#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int stu[100], cnt[11]={0};
    for (int i=0; i<100; i++) {
        cin >> stu[i];
        if (stu[i] == 0) {
            break;
        }
        cnt[stu[i]/10]++;
    }
    for (int i=10; i>0; i--) {
        cout << i*10 << " - " << cnt[i] << endl;
    }
    return 0;
}