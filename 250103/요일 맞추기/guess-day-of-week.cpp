#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string arr[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    cin >> m1 >> d1 >> m2 >> d2;

    int p1 = d1;
    for (int i=1; i<m1; i++) {
        p1 += num_of_days[i];
    }    
    int p2 = d2;
    for (int i=1; i<m2; i++) {
        p2 += num_of_days[i];
    }

    int i = p2-p1;
    while (!(0<=i && i<=6)) {
        if (i < 0) i += 7;
        else i -= 7;
    }
    cout << arr[i];
    return 0;
}