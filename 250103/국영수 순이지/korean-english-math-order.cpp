#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class C {
    public:
        string name; int kor, eng, mat;
        C (string name, int kor, int eng, int mat) {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->mat = mat;
        }
        C () {}
};

bool cmp(C a, C b) {
    if (a.kor == b.kor) {
        if (a.eng == b.eng) {
            return a.mat > b.mat;
        }
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

int main() {
    // Please write your code here.
    C c[10];

    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        string name; int kor, eng, mat;
        cin >> name >> kor >> eng >> mat;
        c[i].name = name;
        c[i].kor = kor;
        c[i].eng = eng;
        c[i].mat = mat;
    }
    sort(c, c+n, cmp);
    for (int i=0; i<n; i++) {
        cout << c[i].name << ' ' << c[i].kor << ' ' << c[i].eng << ' ' << c[i].mat << endl;
    }
    return 0;
}