#include<bits/stdc++.h>
using namespace std;
void prntVector(vector<int> V){
  for (int i = 0; i < V.size(); i++) {
    cout<<V[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int N;
  cout<<"Enter The Number of Vectors That You Want To Have In Your Vector of Vectors: ";
  cin>>N;
  vector<vector<int>>V;
  for (int i = 0; i < N; i++) {
    int SZ;
    cout<<"Enter The Size of Your Vector: ";
    cin>>SZ;
    vector<int> Temp;
    for (int j = 0; j < SZ; j++) {
      int X;
      cin>>X;
      Temp.push_back(X);
    }
    V.push_back(Temp);
  }
  cout<<"Your Vectors Are: "<<endl;
  for (int i = 0; i < V.size(); i++) {
    prntVector(V[i]);
  }
  return 0;
}
