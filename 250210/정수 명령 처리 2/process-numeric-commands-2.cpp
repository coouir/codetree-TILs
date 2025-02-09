#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    queue<int> q;
    
    string str;
    int n;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> str;

        if (str == "push") {
            cin >> n;
            q.push(n);
        } else if (str == "pop") {
            cout << q.front() << endl;
            q.pop();
        } else if (str == "size") {
            cout << q.size() << endl;
        } else if (str == "empty") {
            cout << q.empty() << endl;
        } else if (str == "front") {
            cout << q.front() << endl;
        }
    }
    return 0;
}