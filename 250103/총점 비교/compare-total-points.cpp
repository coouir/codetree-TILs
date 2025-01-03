#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class C {
    public:
        string name; int a, b, c;
        C (string name, int a, int b, int c) {
            this->name = name;
            this->a = a;
            this->b = b;
            this->c = c;
        }
        C () {}
};

bool cmp (C a, C b) {
    return a.a+a.b+a.c < b.a+b.b+b.c;
}

int main() {
    // Please write your code here.
    C c[10];
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> c[i].name >> c[i].a >> c[i].b >> c[i].c;
    }
    sort(c, c+n, cmp);
    for (int i=0; i<n; i++) {
        cout << c[i].name << ' ' << c[i].a << ' ' << c[i].b << ' ' << c[i].c << endl;
    }
    return 0;
}