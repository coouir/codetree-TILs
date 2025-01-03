#include <iostream>
#include <algorithm>
using namespace std;

class C {
    public:
        int x, y, n;
        C (int x, int y, int n) {
            this->x = x;
            this->y = y;
            this->n = n;
        }
        C() {}
};

bool cmp(C a, C b) {
    int xA = a.x, yA = a.y;
    int xB = b.x, yB = b.y;
    if (xA < 0) xA = -xA;
    if (yA < 0) yA = -yA;
    if (xB < 0) xB = -xB;
    if (yB < 0) yB = -yB;

    if (xA+yA == xB+yB) {
        return a.n < b.n;
    }
    return xA+yA < xB+yB;
}

int main() {
    // Please write your code here.
    C c[1000];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> c[i].x >> c[i].y;
        c[i].n = i+1;
    }
    sort(c, c+N, cmp);
    for (int i=0; i<N; i++) {
        cout << c[i].n << endl;
    }
    return 0;
}