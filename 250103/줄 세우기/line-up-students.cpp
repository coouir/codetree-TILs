#include <iostream>
#include <algorithm>
using namespace std;

class C {
    public:
        int h, w, n;
        C (int h, int w, int n) {
            this->h = h;
            this->w = w;
            this->n = n;
        } 
        C () {}
};

bool cmp(C a, C b) {
    if (a.h == b.h) {
        if (a.w == b.w) {
            return a.n < b.n;
        }
        return a.w > b.w;
    }
    return a.h > b.h;
}

int main() {
    // Please write your code here.
    C c[1000];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> c[i].h >> c[i].w;
        c[i].n = i+1;
    }
    sort(c, c+N, cmp);
    for (int i=0; i<N; i++) {
        cout << c[i].h << ' ' << c[i].w << ' ' << c[i].n << endl;
    }
    return 0;
}