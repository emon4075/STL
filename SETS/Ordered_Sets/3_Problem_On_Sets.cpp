/*
 * Given N String, Print Unique String In 
 * Lexicographical Order
 * N <= 10^5
 * |S| <= 100000
 */
#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
  set<string> S;
  int N;
  cin>>N;
  while (N--) {
    string ST;
    cin>>ST;
    S.insert(ST);
  }
  cout<<"Sorted Strings: "<<endl;
  for(string STR: S){
    cout<<STR<<endl;
  }
  return 0;
}
