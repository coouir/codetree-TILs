#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int max_val = 0;

    int X, Y;
    cin >> X >> Y;
    for (int i=X; i<=Y; i++) {
        max_val = max(max_val, i/1000 + (i%1000)/100 + (i%1000)%100/10 + (i%1000)%100%10);
    }
    cout << max_val;

    return 0;
}
