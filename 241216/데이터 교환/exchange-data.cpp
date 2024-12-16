#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5, b = 6, c = 7, temp1, temp2;
    temp1 = c;
    temp2 = b;
    b = a;
    c = temp2;
    a = temp1;

    cout << a << endl;
    cout << b << endl;
    cout << c;
    return 0;
}