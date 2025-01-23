#include <iostream>
#include <algorithm>
using namespace std;

class CD {
    public:
        int p, m, t;
        CD (int p, int m, int t) {
            this->p = p;
            this->m = m;
            this->t = t;
        }
        CD () {}
};

class CS {
    public:
        int p, t;
        CS (int p, int t) {
            this->p = p;
            this->t = t;
        }
        CS () {}
};

bool cmpCS(CS a, CS b) {
    return a.t < b.t;
}

int main() {
    // Please write your code here.
    CD cd[1000];
    CS cs[50];

    int N, M, D, S;
    cin >> N >> M >> D >> S;
    for (int i=0; i<D; i++) {
        cin >> cd[i].p >> cd[i].m >> cd[i].t;
    }

    for (int i=0; i<S; i++) {
        cin >> cs[i].p >> cs[i].t;
    }
    sort(cs, cs+S, cmpCS);

    int max_val = 0;
    for (int i=1; i<=M; i++) {
        int cnt = 0;
        for (int j=0; j<S; j++) {
            for (int k=0; k<D; k++) {
                if (i != cd[k].m) continue;
                if (cs[j].p != cd[k].p) continue;
                if (cs[j].t <= cd[k].t) continue;
                cnt++;

            }
        }

        int sick_people = 0;
        if (cnt == S) {
            int arr[51] = {};
            for (int j=0; j<D; j++) {
                if (cd[j].m == i) {
                    if (arr[cd[j].p] == 0) sick_people++;
                    arr[cd[j].p] = 1;
                }
            }
            max_val = max(max_val, sick_people);
        }
    }
    cout << max_val;

    return 0;
}