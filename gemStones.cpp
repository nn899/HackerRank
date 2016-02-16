#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
solution to: https://www.hackerrank.com/challenges/gem-stones
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    cin>>num;
    string str;
    int result = 0;
    int histogram[256] = {};
    for(int i = 0; i<num; i++) {
        cin>>str;
        for(int j =0; j< str.length(); j++) {
            if(histogram[str[j]] == i) {
                ++histogram[str[j]];
            }
        }
    }
    for(int i = 0; i < 256; i++) {
        if(histogram[i]==num) {
            result++;
        }
    }
    cout<<result;
    return 0;
}

