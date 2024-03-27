#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
void prntVector(vector<int> V){
  for (int i = 0; i < V.size(); i++) {
    cout<<V[i]<<endl;
  }
}
int main()
{
  vector<int> V;
  int N;
  cout << "Enter The Number of Elements That You Want In Vector: ";
  cin>>N;
  cout<<"Enter The Elements: "<<endl;
  for (int i = 0; i < N; i++) {
    int X;
    cin>>X;
    cout<<"Vector Size is: "<< V.size()<<endl;
    V.push_back(X);
  }
  cout<<"The Elements are: "<<endl;
  prntVector(V);
  return 0;
}
