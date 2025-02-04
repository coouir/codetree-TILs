#include <iostream>
#include <list>
using namespace std;

int main() {
    // Please write your code here.
    list <char> l;
    list <char>::iterator it;

    int n, m;
    char c;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> c;
        l.push_back(c);
    }

    it = l.end();
    for (int i=0; i<m; i++) {
        cin >> c;
        if (c == 'L') {
            if (it == l.begin()) continue;
            it--;

        } else if (c == 'R') {
            if (it == l.end()) continue;
            it++;

        } else if (c == 'D') {
            if (it == l.end()) continue;
            it = l.erase(it);
        } else if (c == 'P') {
            char ch;
            cin >> ch;
            l.insert(it, ch);
        }
    }
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }

    return 0;
}