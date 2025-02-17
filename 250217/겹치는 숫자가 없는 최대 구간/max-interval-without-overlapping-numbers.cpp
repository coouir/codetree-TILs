#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];
int cnt[110000];

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    
    cnt[arr[0]] = 1;
    
    bool two = false;
    int answer = -1;
    int s = 0;
    int e = 0;
    while (e < N) {
        // 정답
        if (two == false) answer = max(answer, e-s+1);

        // 이동
        if (two == false) {
            e++;
            cnt[arr[e]]++;

            if (cnt[arr[e]] == 2) two = true;
        } else {
            cnt[arr[s]] -= 1;
            if (cnt[arr[s]] == 1) {
                two = false;
            }
            s += 1;
        }

    }
    cout << answer;

    return 0;
}


// 1   3   1   2   3
//     s
//             e