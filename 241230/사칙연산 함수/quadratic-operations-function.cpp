#include <iostream>
using namespace std;

void Add(int a, int c) {
    cout << a << " + " << c << " = " << a+c;
}
void Subtract(int a, int c) {
    cout << a << " - " << c << " = " << a-c;
}
void Multiply(int a, int c) {
    cout << a << " * " << c << " = " << a*c;
}
void Divide(int a, int c) {
    cout << a << " / " << c << " = " << a/c;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;
    cin >> a >> o >> c;

    if (o == '+') {
        Add(a, c);
    } else if (o == '-') {
        Subtract(a, c);
    } else if (o == '/') {
        Divide(a, c);
    } else if (o == '*') {
        Multiply(a, c);
    } else {
        cout << "False";
    }
    return 0;
}