#include <iostream>
#include <string>
using namespace std;

bool F(int n) { 
    int arr[10] = {};

    string str = to_string(n);
    for (int i=0; i<str.length(); i++) 
        arr[str[i]-'0']++;

    int cnt = 0;
    bool check1 = false;
    for (int i=0; i<10; i++) { 
        if (arr[i] != 0) cnt++;
        if (arr[i] == 1) check1 = true;
    }

    if (cnt == 2 && check1) return true;
    return false;
}

int main() {
    // Please write your code here.
    int cnt = 0;

    int X, Y;
    cin >> X >> Y;
    for (int i=X; i<=Y; i++) 
        if(F(i)) cnt++;
    
    cout << cnt;

    return 0;
}