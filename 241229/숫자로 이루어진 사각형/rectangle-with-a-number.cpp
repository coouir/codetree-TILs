#include <iostream>
using namespace std;

void Print(int N) {
    int n = 1;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << n++ << ' ';
            if (n == 10) n = 1; 
        }
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    Print(N);
    return 0;
}