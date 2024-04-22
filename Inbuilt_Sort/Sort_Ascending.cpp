#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> V;
  int N;
  cout<<"Enter The Number of Vector Elements: "<<endl;
  cin>>N;
  cout<<"Enter The Elements In Unordered Way: "<<endl;
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
