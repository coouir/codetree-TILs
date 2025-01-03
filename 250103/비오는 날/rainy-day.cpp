#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Weather {
    public:
        int y, m, d; string week, wea;
        Weather (int y=0, int m=0, int d=0, string week=" ", string wea=" ") {
            this->y = y;
            this->m = m;
            this->d = d;
            this->week = week;
            this->wea = wea;
        }
};

int main() {
    // Please write your code here.
    Weather weather[100];
    
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        string input, week, wea;
        cin >> input >> week >> wea;
        stringstream ss(input);
        string part1, part2, part3;

        getline(ss, part1, '-');
        getline(ss, part2, '-');
        getline(ss, part3);

        weather[i] = Weather(stoi(part1), stoi(part2), stoi(part3), week, wea);
    }
    int min_idx = -1;
    for (int i=0; i<n; i++) {
        if (weather[i].wea == "Rain") {
            min_idx = i;
        }
    }

    for (int i=0; i<n; i++) {
        if (weather[i].wea == "Rain") {
            if (weather[i].y < weather[min_idx].y) {
                min_idx = i;
            } else if (weather[i].y == weather[min_idx].y) {
                if (weather[i].m < weather[min_idx].m) {
                    min_idx = i;
                } else if (weather[i].m == weather[min_idx].m && weather[i].d < weather[min_idx].d) {
                    min_idx = i; 
                }
            }
        }
    }
    string y = to_string(weather[min_idx].y), m , d;
    if (weather[min_idx].m < 10) {
        m = "0" + to_string(weather[min_idx].m);
    } else {
        m = to_string(weather[min_idx].m);
    }
    if (weather[min_idx].d < 10) {
        d = "0" + to_string(weather[min_idx].d);
    } else {
        d = to_string(weather[min_idx].d);
    }
    cout << y << '-' << m << '-' << d << ' ' << weather[min_idx].week << ' ' << weather[min_idx].wea;
    return 0;
}