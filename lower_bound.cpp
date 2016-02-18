#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
solution to ttps://www.hackerrank.com/challenges/cpp-lower-bound
*/

int main() {
    int elements;
    int num;
    int queries;
    vector<int> v;
    cin >> elements;
    int i;
    int findQ;
    for (i = 0; i < elements; i++) {
        cin >> num;
        v.push_back(num);
    }
    sort (v.begin(), v.end());
    cin >> queries;
    for (i = 0; i < queries; i++) {
        int q;
        cin >> q;

        auto pos = lower_bound(v.begin(), v.end(), q);

        cout << (*pos == q ? "Yes" : "No") << " "
             << pos - v.begin() + 1 << endl;
    }
    return 0;
}
