#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    stack<int> s;

    string str;
    int n;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> str;
        if (str == "push") {
            cin >> n;
            s.push(n);
        } else if (str == "pop") {
            cout << s.top() << endl;
            s.pop();
        } else if (str == "size") {
            cout << s.size() << endl;
        } else if (str == "empty") {
            cout << s.empty() << endl;
        } else if (str == "top") {
            cout << s.top() << endl;
        }
    }
    return 0;
}