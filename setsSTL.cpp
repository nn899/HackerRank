/* 
Solution to: https://www.hackerrank.com/challenges/cpp-sets
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    set<int> intSet;
    int numQ;
    cin >> numQ;
    int opr, x;
    while(numQ != 0) {
        cin >> opr >> x;
        std::set<int>::iterator it;
        switch(opr) {
            case 1:
                intSet.insert(x);
                break;
            case 2:                
                it = intSet.find(x);
                if (it != intSet.end()) {
                    intSet.erase(x);
                }                             
                break;
            case 3:
                it = intSet.find(x);
                cout << (it == intSet.end() ? "No" : "Yes") << endl;
                break;
        } 
        numQ--;
    }
    return 0;
}

