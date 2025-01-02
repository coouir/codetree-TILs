#include <iostream>
using namespace std;

void PrintNstars(int N) {
    if (N == 0) return;
    PrintNstars(N-1);
    for (int i=0; i<N; i++) {
        cout << '*';
    }
    cout << endl;
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    PrintNstars(N);
    return 0;
}