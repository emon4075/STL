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
  cout<<"Enter The Number of Vectors That You Want To Have: ";
  cin>>N;
  vector<int> V[N]; // This Will Create N Numbers of Vectors
  for (int i = 0; i < N; i++) {
    int SZ;
    cout<<"Enter The Number of Elements That You Want Into The Vector: ";
    cin>>SZ;
    for (int j = 0; j < SZ; j++) {
      int X;
      cin>>X;
      V[i].push_back(X);
    }
  }
  cout<<"The Vectors Are: "<<endl;
  for (int i = 0; i < N; i++) {
    prntVector(V[i]);
  }
  return 0;
}
