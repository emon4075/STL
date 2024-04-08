// https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/?fbclid=IwAR1n1FJUNpWIeq7dHY-HytoqqE1nbK9gD4jMjI2UWGTPE8GF4kHROCb7ouA
#include<bits/stdc++.h>
using namespace std;
int main(){
  long long T;
  cin>>T;
  while (T--) {
    long long N,M;
    cin>>N>>M;
    unordered_set<long long> S;
    while (N--) {
      long long X;
      cin>>X;
      S.insert(X);
    }
    while (M--) {
      long long X;
      cin>>X;
      if (S.find(X)!=S.end()) {
        cout<<"YES"<<endl;
      }
      else {
        cout<<"NO"<<endl;
        S.insert(X);
      }
    }
  }
  return 0;
}
