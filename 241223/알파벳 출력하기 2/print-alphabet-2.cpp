#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    char c = 'A';

    for (int i=0; i<N; i++) {
        for (int j=0; j<i; j++) {
            cout << "  ";
        }

        for (int j=0; j<N-i; j++) {
            cout << c << ' ';
            if (c == 'Z') {
                c = 'A';
            } else {
                c++;
            }
        }
        cout << '\n';
    }
    return 0;
}