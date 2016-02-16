#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*
My Solution to: https://www.hackerrank.com/challenges/alternating-characters
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    cin>>num;
    int solution[num];
    string inputString;
    for(int i = 0; i < num; i++) {   
        //getline( cin, inputString);
        cin >> inputString;
        solution[i] = 0;
        for(int j = 1; j < inputString.length(); j++) {
            if(inputString[j] == inputString[j-1]) {
                solution[i]++;
            }
        } 
    }
    for(int i = 0; i < num; i++) {
        cout<<solution[i]<<endl;
    }
    return 0;
}

