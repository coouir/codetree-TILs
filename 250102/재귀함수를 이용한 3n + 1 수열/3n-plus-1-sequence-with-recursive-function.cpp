#include <iostream>
using namespace std;

int F(int n) {
    if (n==1) return 0;

    if (n%2 == 0) 
        return 1+F(n/2);
    else 
        return 1+F(3*n+1);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << F(n);
    return 0;
}