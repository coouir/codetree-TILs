#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[6];
    
    int sum_val = 0;
    for (int i=0; i<6; i++) {
        cin >> arr[i];
        sum_val += arr[i];
    }

    int min_val = 1 << 30;
    for (int i=0; i<6; i++) {
        for (int j=i+1; j<6; j++) {
            for (int k=0; k<6; k++) {
                for (int l=k+1; l<6; l++) {
                    if (i == k || i == l || j == k || j == l) continue;
                    int team1 = arr[i] + arr[j];
                    int team2 = arr[k] + arr[l];
                    int team3 = sum_val - team1 - team2;
                    min_val = min(min_val, max(team1, max(team2, team3)) - min(team1, min(team2, team3)));
                }
            }
        }
    }
    cout << min_val;
    
    return 0;
}