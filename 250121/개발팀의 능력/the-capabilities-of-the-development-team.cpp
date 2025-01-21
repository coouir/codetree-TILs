#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[5];
    int sum_val = 0;

    for (int i=0; i<5; i++) {
        cin >> arr[i];
        sum_val += arr[i];
    }

    int ans = 1 << 30;
    int check = false;
    for (int i=0; i<5; i++) {
        for (int j=i+1; j<5; j++) {
            for (int k=0; k<5; k++) {
                if (i == k || j == k) continue;
                int team1 = arr[i]+arr[j];
                int team2 = arr[k];
                int team3 = sum_val - team1 - team2;

                if (team1 == team2 || team1 == team3 || team2 == team3) continue;
                
                ans = min(ans, max(team1, max(team2, team3)) - min(team1, min(team2, team3)));
                check = true;
            }
        }
    }
    if (check) cout << ans;
    else cout << -1;

    return 0;
}