#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    string str;
    cin >> a >> b >> str;

    int n = 0;
    for (int i=0; i<str.length(); i++) {
        n = n*a + (str[i]-'0');
    }
    
    int arr[1000], cnt=0;
    while (true) {
        if (n < b) {
            arr[cnt] = n;
            break;
        } else {
            arr[cnt++] = n%b;
            n /= b;
        }
    }
    for (int i=cnt; i>=0; i--) {
        cout << arr[i];
    }
    return 0;
}