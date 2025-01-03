#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    
    if (((a-1)*(60*24) + (60*b) + c) - (10*(60*24) + (60*11) + 11) < 0) {
        cout << -1;
    } else {
        cout << ((a-1)*(60*24) + (60*b) + c) - (10*(60*24) + (60*11) + 11);
    }
    
    return 0;
}