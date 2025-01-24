#include <iostream>
#include <algorithm>
using namespace std;

class C {
    public:
        int p, s;
        C (int p, int s) {
            this->p = p;
            this->s = s;
        }
        C () {}
};

int main() {
    // Please write your code here.
    C c[1000];

    int N, B;
    cin >> N >> B;
    for (int i=0; i<N; i++) 
        cin >> c[i].p >> c[i].s;
    
    int max_val = 0;
    for (int i=0; i<N; i++) {

        int total[1000] = {};
        for (int j=0; j<N; j++) {
            if (i == j) total[j] += (c[j].p/2 + c[j].s);
            else total[j] += (c[j].p + c[j].s); 
        }
        sort(total, total+N);

        int cnt = 0;
        int price = 0;
        for (int j=0; j<N; j++) {
            price += total[j];

            if (price > B) break;
            cnt++;
        }
        max_val = max(max_val, cnt);
    }
    cout << max_val;

    return 0;
}

// 4 2
// 2 0
// 8 1
// 6 3
// 12 5

// 4 2 9 9 17
// 2 4 9 9 17 