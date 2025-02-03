#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> v;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        string str;
        cin >> str;

        int n;
        if (str == "push_back") {
            cin >> n;
            v.push_back(n);
        } else if (str == "pop_back") {
            v.pop_back();
        } else if (str == "size") {
            cout << v.size() << endl;
        } else {
            cin >> n;
            cout << v[n-1] << endl;
        }
    }
    return 0;
}