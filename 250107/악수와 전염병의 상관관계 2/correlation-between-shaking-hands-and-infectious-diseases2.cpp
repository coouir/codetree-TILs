#include <iostream>
#include <algorithm>
using namespace std;

class C {
    public:
        int t, x, y;
        C (int t, int x, int y) {
            this->t = t;
            this->x = x;
            this->y = y;
        } 
        C () {}
};

bool cmp(C a, C b) {
    return a.t < b.t;
}

int main() {
    // Please write your code here.
    C c[250]; 
    int arrNInf[101] = {}; // 감염시: 1, 비감염시: 0
    int arrNCnt[101] = {};
    int N, K, P, T;
    cin >> N >> K >> P >> T;
    arrNInf[P] = 1;

    for (int i=0; i<T; i++) {
        cin >> c[i].t >> c[i].x >> c[i].y;
    }
    sort(c, c+T, cmp);
    for (int i=0; i<T; i++) {
        // cout << c[i].t << ' ' << c[i].x << ' ' << c[i].y << endl;
        int X = c[i].x, Y = c[i].y;
        if (arrNInf[X] == 1 && arrNInf[Y] == 1) {
            arrNCnt[X]++;
            arrNCnt[Y]++;
        } else if (arrNInf[X] == 1) {
            if (arrNCnt[X] < K) {
                arrNInf[Y] = 1;
            } 
            arrNCnt[X]++;
        } else if (arrNInf[Y] == 1) {
            if (arrNCnt[Y] < K) {
                arrNInf[X] = 1;
            }
            arrNCnt[Y]++;
        }
    }
    cout << endl;
    for (int i=1; i<=N; i++) {
        cout << arrNInf[i];
    }
    return 0;
}