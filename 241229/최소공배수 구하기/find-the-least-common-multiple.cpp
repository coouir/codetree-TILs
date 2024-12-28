#include <iostream>
using namespace std;

void GCM(int n, int m) {
    int r = (n >= m ? m : n);
    int max = 1;
    for (int i=2; i<=r; i++) {
        if (n%i == 0 && m%i == 0) {
            max = i;
        }
    }
    cout << (n*m)/max;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    GCM(n, m);
    return 0;
}