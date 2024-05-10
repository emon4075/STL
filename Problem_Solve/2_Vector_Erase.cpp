// https://www.hackerrank.com/challenges/vector-erase/problem
#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin>>N;
  vector<int> V;
  while (N--) {
    int X;
    cin>>X;
    V.push_back(X);
  }
  int x;
  cin>>x;
  V.erase(V.begin()+(x-1));
  int A,B;
  cin>>A>>B;
  V.erase(V.begin()+(A-1),V.begin()+(B-1));
  cout<<V.size()<<endl;
  for(auto X: V){
    cout<<X<<" ";
  }
  cout<<endl;
  return 0;
}
