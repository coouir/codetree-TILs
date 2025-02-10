#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Please write your code here.
    deque<int> d;

    int N;
    cin >> N;
    for (int i=1; i<=N; i++) 
        d.push_back(i);
    
    while(d.size() != 1) {
        d.pop_front();
        d.push_back(d.front());
        d.pop_front();
    }
    cout << d.front();

    return 0;
}