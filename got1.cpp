#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*
My solution to: https://www.hackerrank.com/challenges/game-of-thrones
*/
int main() {
   
    string s;
    cin>>s;
    int sLen = s.length();
    cout<<"length="<<sLen<<endl;
    int histogram[256] = {0};
    int flag = 0;
    for (int i = 0; i < sLen; ++i) {
        ++histogram[s[i]];
    }
    for(int j = 0; j <= 256; j++ ) {
        if(histogram[j]%2 != 0) {
              flag++;
        }
    }  
    if (sLen%2 == 0 && flag == 0) {
        cout<<"YES";
    }
    else if(sLen%2 != 0 && flag == 1) {
        cout<<"YES";
    }
    else 
        cout<<"NO";
    return 0;
}
