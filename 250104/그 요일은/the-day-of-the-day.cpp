#include <iostream>
#include <string>
using namespace std;

int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int F(int m, int d) {
    int result = d;
    for (int i=1; i<=m-1; i++)  {
        result += num_of_days[i];
    }   
    return result;
}

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    string arr[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"}, week;
    cin >> m1 >> d1 >> m2 >> d2 >> week;
    
    int cnt=0;
    for (int i=1; i<F(m2, d2)-F(m1, d1); i++) {
        if (arr[i%7] == week) cnt++;
    }
    cout << cnt;
    return 0;
}