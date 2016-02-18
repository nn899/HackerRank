#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
solution to -> https://www.hackerrank.com/challenges/anagram/submissions/code/17547603
*/
int main() {
    int num;
    string str;
    cin>>num;
    int result[num];
    for (int i = 0; i < num; i++) {
        cin>>str;
        result[i] = 0;
        int arr[26] = {0};
        if((str.length()%2) != 0) {
            result[i] = -1;
        }
        else {
            int j;
            for(j = 0; j < (str.length()/2); j++) {
                arr[str[j]-'a']++;
            }
            for(j = str.length()/2; j < (str.length()); j++) {
                arr[str[j]-'a'] = max((arr[str[j]-'a'] - 1), 0);
            }
            for(j = 0; j < 26; j++) {
                result[i] += abs(arr[j]);
            }
        }
    }
    for(int i = 0; i < num; i++) {
        cout<<result[i]<<endl;
    }
    return 0;
}

