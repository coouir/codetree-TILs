#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int cnt_o = 0, cnt_e = 0;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int n;
        cin >> n;

        if (n%2 == 1) cnt_o++;
        else cnt_e++;
    }

    int cnt = min(cnt_o, cnt_e)*2;
    int min_val = min(cnt_o, cnt_e);

    cnt_o -= min_val;
    cnt_e -= min_val;

    if (cnt_o%3 == 0) {
        cnt += (cnt_o/3)*2;
    } else if (cnt_o%3 == 1) {
        cnt += (cnt_o/3)*2 - 1;
    } else {
        cnt += (cnt_o/3)*2 + 1;
    }

    if (cnt_e > 0) {
        cnt++;
    }

    cout << cnt;
    
    return 0;
}


// ㅎ
// -> 0

// ㅎ, ㅎ
// -> ㅎ, ㅎ / 1

// ㅎ, ㅎ, ㅎ
// -> ㅎ, ㅎ / ㅎ 2

// ㅎ, ㅎ, ㅎ, ㅎ
// -> ㅎ, ㅎ, ㅎ, ㅎ 1

// ㅎ, ㅎ, ㅎ, ㅎ, ㅎ
// -> ㅎ, ㅎ / ㅎ / ㅎ, ㅎ 3

// ㅎ, ㅎ, ㅎ, ㅎ, ㅎ, ㅎ
// -> ㅎ, ㅎ / ㅎ / ㅎ, ㅎ / ㅎ 4

// ㅎ, ㅎ, ㅎ, ㅎ, ㅎ, ㅎ, ㅎ
// -> ㅎ, ㅎ / ㅎ / ㅎ, ㅎ ㅎ, ㅎ 3

// ㅎ, ㅎ, ㅎ, ㅎ, ㅎ, ㅎ, ㅎ, ㅎ
// -> ㅎ, ㅎ / ㅎ / ㅎ, ㅎ / ㅎ / ㅎ, ㅎ -> 5

// 1 / 3 = 0..1 =    0
// 2 / 3 = 0..2 =    1

// 3 / 3 = 1..0 = 2*1 + 0
// 4 / 3 = 1..1 = 2*1 - 1
// 5 / 3 = 1..2 = 2*1 + 1

// 6 / 3 = 2..0 = 2*2 + 0
// 7 / 3 = 2..1 = 2*2 - 1
// 8 / 3 = 2..2 = 2*2 + 1

// 9 / 3 = 3..0
// 10 / 3 = 3..1


// ㅉ
// -> ㅉ 1

// ㅉ, ㅉ
// -> ㅉ, ㅉ / 1

