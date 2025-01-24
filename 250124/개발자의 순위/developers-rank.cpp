#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10][20];
    int mathch_result[3000]={};

    int K, N;
    cin >> K >> N;
    for (int i=0; i<K; i++) {
        for (int j=0; j<N; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<K; i++) { // 경기
        for (int j=0; j<N; j++) {
            for (int k=j+1; k<N; k++) {
                mathch_result[stoi(to_string(arr[i][j]) + to_string(arr[i][k]))]++;
            }
        }
    }
    
    int cnt = 0;
    for (int i=0; i<2020; i++) {
        if (mathch_result[i] == K) cnt++;
    }
    cout << cnt;
    
    return 0;
}
