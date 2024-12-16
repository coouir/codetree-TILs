#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    int w = 13;
	double r = 0.165;

	cout.precision(6);
	cout << w << " * " << r << " = " << w*r;
    return 0;
}