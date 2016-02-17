#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
Solution to https://www.hackerrank.com/challenges/make-it-anagram
*/

int main() {
    string input1;
    string input2;
    cin>>input1;
    cin>>input2;
    int arr1[26] = {0};
    int i;
    int result;
    for(i = 0; i < input1.length(); i++) {
        arr1[input1[i]-'a']++;
    }
    for(i = 0; i < input2.length(); i++) {
        arr1[input2[i]-'a']--;
    }
    for(i = 0; i < 26; i++) {
        if(arr1[i] != 0) {
            result = result + abs(arr1[i]);
        }
    }
    cout<<result;
    return 0;
}

