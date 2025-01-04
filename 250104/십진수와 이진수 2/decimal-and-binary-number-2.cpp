#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int num = 0;
    string str;
    cin >> str;
    for (int i=0; i<str.length(); i++) {
        num = num*2 + (str[i] - '0');
    }
    num *= 17;
    
    int arr[1000], cnt=0;
    while (true) {
        if (num < 2) {
            arr[cnt] = num;
            break;
        } else {
            arr[cnt++] = num%2;
            num /= 2;
        }
    }
    for (int i=cnt; i>=0; i--) {
        cout << arr[i];
    }
    return 0;
}