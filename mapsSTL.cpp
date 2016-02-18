#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

/*
Solution to: https://www.hackerrank.com/challenges/cpp-maps
*/

int main() {
    map <string, int> score;
    int numQ = 0;
    int val = 0;
    int choice = 0;
    int result = 0;
    string str;
    cin >> numQ;
    while(numQ != 0) {
        cin >> choice >> str;
        switch(choice) {
            case 1:
                cin >> val;
                if(score.find(str) == score.end()) {
                    score[str] = val;
                }
                else {
                    score[str] += val;
                }
                break;
            case 2:
                score.erase(str);
                break;
            case 3:
                if(score.find(str) != score.end()) {
                    result = score[str];
                }
                else {
                    result = 0;
                }
                cout << result << endl;
                break;
        }
        numQ--;
    }
    return 0;
}

