#include <iostream>
using namespace std;

int A[100000];
int B[100000];

int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++)
        cin >> A[i];
    
    for (int i=0; i<M; i++)
        cin >> B[i];

    bool check = true;
    int i = 0;
    for (int j=0; j<M; j++) {
        while (i < N && A[i] != B[j]) {
            i++;
        }

        if (i == N) {
            check = false;
            break;
        } else {
            i++;
        }
    }
    cout << (check? "Yes" : "No");

    return 0;
}