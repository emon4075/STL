#include<bits/stdc++.h>
using namespace std;
void prntVector(vector<int> V){
  for (int i = 0; i < V.size(); i++) {
    cout<<V[i]<<endl;
  }
}
int main()
{
  // vector<int> V(10);
  vector<int> V(10,3);
  V.push_back(11);
  cout<<"The Elements are: "<<endl;
  prntVector(V);
  return 0;
}
