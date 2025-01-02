#include <iostream>
using namespace std;

class Agent {
    public:
        char code_name; int score;
        Agent (char code_name = ' ', int score = 0) {
            this->code_name = code_name;
            this->score = score; 
        }
};

int main() {
    // Please write your code here.
    Agent agent[5];
    int min = 100;
    char code;
    for (int i=0; i<5; i++) {
        char code_name; int score;
        cin >> code_name >> score;
        agent[i] = Agent(code_name, score);
        if (agent[i].score < min) {
            min = agent[i].score;
            code = agent[i].code_name;
        }
    }
    cout << code << ' ' << min;
    return 0;
}