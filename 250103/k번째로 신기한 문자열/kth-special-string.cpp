#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, k, cnt=0;
    string T, arr[100];
    cin >> n >> k >> T;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        if (s.substr(0, T.length()) == T) arr[cnt++] = s;
    }
    sort(arr, arr+cnt);
    cout << arr[k-1];
    return 0;
}