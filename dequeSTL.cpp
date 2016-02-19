#include <iostream>
#include <deque> 
#include <algorithm>

using namespace std;

/*
Solution to:  https://www.hackerrank.com/challenges/deque-stl
*/

void printKMax(int arr[], int n, int k){
   deque<int> d;
   int x = 0;
   while (x != k) {
       d.push_back(arr[x]);
       x++;
   }
   for (int i = x; i <= n; i++) {       
       cout << *max_element(d.begin(),d.end()) << " ";
       d.pop_front();
       d.push_back(arr[i]);
   }
}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
       cout << endl;
     }
     return 0;
}
