#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, q, arr[100];
    cin >> n >> q;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<q; i++) {
        int t, num, s, e;
        cin >> t;
        if (t == 1) {
            cin >> num;
            cout << arr[num-1] << endl;
        } else if (t == 2) {
            cin >> num;
            int idx = 0;
            for (int i=0; i<n; i++) {
                if (arr[i] == num) {
                    idx = i;
                    break;
                }
            }
            cout << idx+1 << endl;
        } else if (t == 3) {
            cin >> s >> e;
            for (int j=s-1; j<e; j++) {
                cout << arr[j] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}