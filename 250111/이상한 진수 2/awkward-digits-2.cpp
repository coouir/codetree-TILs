#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin >> a;

    int M = 0;
    for (int i=0; i<a.length(); i++) {
        if (a[i] == '0') {
            a[i] = '1';
            int N = 0;
            for (int j=0; j<a.length(); j++) {
                N = 2*N + (a[j]-'0');
            }
            if (M < N) M = N;
            a[i] = '0';
        } 
    }
    cout << M;
    return 0;
}