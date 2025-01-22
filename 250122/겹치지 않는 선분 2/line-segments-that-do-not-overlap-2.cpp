#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1[100], x2[100];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> x1[i] >> x2[i];
    
    int cnt = 0;
    for (int i=0; i<N; i++) {

        bool check = true;
        for (int j=0; j<N; j++) {
            if (i == j) continue;

            if ((x1[j] < x1[i] && x2[i] < x2[j]) || (x1[i] < x1[j] && x2[j] < x2[i])) {
                check = false;
                break;
            }
        }

        if (check) cnt++;
    }    
    cout << cnt;
    
    return 0;
}