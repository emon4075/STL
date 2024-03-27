#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<pair<int,string>>V;
  int N;
  cout<<"Enter The Number of Pairs That You Want To Put Into The Vector: ";
  cin>>N;
  for (int i = 0; i < N; i++) {
    int X;
    string S;
    cout<<"Enter ID: ";
    cin>>X;
    cout<<"Enter Name: ";
    cin>>S;
    V.push_back(make_pair(X,S));
  }
  for (int i = 0; i < V.size(); i++) {
    cout<<V[i].first<<" ";
    cout<<V[i].second<<endl;
  }
  return 0;
}
