#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
https://www.hackerrank.com/challenges/vector-erase
*/

int main() {
    int num,temp,i;
    cin>>num;
    int pos,r1,r2;
    vector<int> v;
    for(i=0;i<num;i++){
        cin>>temp;
        v.push_back(temp);
    }
    cin>>pos>>r1>>r2;
    v.erase(v.begin()+pos-1);
    v.erase(v.begin()+r1-1,v.begin()+r2-1);
    cout<<v.size()<<endl;
    for( int c : v) {
        cout<<c<<" ";
    }
    
    cout<<endl;
    return 0;
}
