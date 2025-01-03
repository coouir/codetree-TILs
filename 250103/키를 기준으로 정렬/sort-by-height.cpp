#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class C {
    public:
        string name; int h, w;
        C (string name, int h, int w) {
            this->name = name;
            this->h = h;
            this->w = w;
        }
        C () {}
};

bool cmp(C a, C b) {
    return a.h < b.h;
}

int main() {
    // Please write your code here.
    C c[10];
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        string name; int h, w; 
        cin >> name >> h >> w;
        c[i] = C(name, h, w);
    }
    sort(c, c+n, cmp);
    for (int i=0; i<n; i++) {
        cout << c[i].name << ' ' << c[i].h << ' ' << c[i].w << endl;
    }
    return 0;
}