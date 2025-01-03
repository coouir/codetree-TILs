#include <iostream>
#include <algorithm>
using namespace std;

class C {
    public:
        int a, b;
        C (int a, int b) {
            this->a = a;
            this->b = b;
        }
        C () {}
};

bool cmp(C a, C b) {
    if (a.a == b.a) {
        return a.b < b.b;
    }
    return a.a < b.a;
}

int main() {
    // Please write your code here.
    C c[1000];
    
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> c[i].a;
        c[i].b = i+1;
    }
    sort(c, c+N, cmp);
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (i+1 == c[j].b) {
                cout << j+1 << ' ';
            }
        }
    }
    return 0;
}