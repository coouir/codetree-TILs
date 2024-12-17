#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int aA, bA;
    char aM, bM;
    cin >> aA >> aM >> bA >> bM;

    cout << ((aA >= 19 && aM == 'M') || (bA >= 19 && bM == 'M'));
    return 0;
}