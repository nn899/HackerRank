#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
My solution to: https://www.hackerrank.com/challenges/pangrams
*/

int main() {
    string inputString;
    getline( cin, inputString);
    int arr[26] = {};
    bool flag = 0;
    int alphabetTab = 0;

    for(int i = 0; i < inputString.length(); i++){
        int num = (tolower(inputString[i]) - 'a');
        if(num < 0 || num > 25){
            continue;
        }
        if(arr[num] == 0){
            alphabetTab++;
        }
        if(alphabetTab >= 26){
            flag = 1;
            break;
        } else {
            arr[num]++;
        }
    }
    if(flag)
        cout<<"pangram";
    else
        cout<<"not pangram";
    return 0;
}
