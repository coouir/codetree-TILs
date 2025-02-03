#include <iostream>
#include <list>
using namespace std;

int main() {
    // Please write your code here.
    list<int> l;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        string str;
        cin >> str;

        int n;
        if (str == "push_front") {
            cin >> n;
            l.push_front(n);
        } else if (str == "push_back") {
            cin >> n;
            l.push_back(n);
        } else if (str == "pop_front") {
            cout << l.front() << endl;
            l.pop_front();
        } else if (str == "pop_back") {
            cout << l.back() << endl;
            l.pop_back();
        } else if (str == "size") {
            cout << l.size() << endl;
        } else if (str == "empty") {
            cout << l.empty() << endl;
        } else if (str == "front") {
            cout << l.front() << endl;
        } else if (str == "back") {
            cout << l.back() << endl;
        }
    }
    return 0;
}