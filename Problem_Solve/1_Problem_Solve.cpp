// https://www.hackerrank.com/challenges/vector-sort/problem
#include<bits/stdc++.h>
using namespace  std;
int main(){
  int N;
  cin>>N;
  vector<int> V;
  while (N--) {
    int X;
    cin>>X;
    V.push_back(X);
  }
  sort(V.begin(),V.end());
  for(auto X: V){
    cout<<X<<" ";
  }
  cout<<endl;
  return 0;
}
