#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class C {
    public:
        string name; int h; double w;
        C (string name, int h, double w) {
            this->name = name;
            this->h = h;
            this->w = w;
        }
        C () {}
};

bool cmp1(C a, C b) {
    return a.name < b.name;
}

bool cmp2(C a, C b) {
    return a.h > b.h;
}

int main() {
    // Please write your code here.
    C c[5];
    for (int i=0; i<5; i++) {
        cin >> c[i].name >> c[i].h >> c[i].w;
    }
    sort(c, c+5, cmp1);
    cout << "name" << endl;
    for (int i=0; i<5; i++) {
        cout << c[i].name << ' ' << c[i].h << ' ' << c[i].w << endl;
    }

    sort(c, c+5, cmp2);
    cout << endl << "height" << endl;
    for (int i=0; i<5; i++) {
        cout << c[i].name << ' ' << c[i].h << ' ' << c[i].w << endl;
    }
    return 0;
}