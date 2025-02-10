#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Please write your code here.
    deque<int> d;

    string str;
    int n;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> str;

        if (str == "push_front") {
            cin >> n;
            d.push_front(n);
        } else if (str == "push_back") {
            cin >> n;
            d.push_back(n);
        } else if (str == "pop_front") {
            cout << d.front() << endl;
            d.pop_front();
        } else if (str == "pop_back") {
            cout << d.back() << endl;
            d.pop_back();
        } else if (str == "size") {
            cout << d.size() << endl;
        } else if (str == "empty") {
            cout << d.empty() << endl;
        } else if (str == "front") {
            cout << d.front() << endl;
        } else if (str == "back") {
            cout << d.back() << endl;
        }
    }
    return 0;
}