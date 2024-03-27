#include<bits/stdc++.h>
using namespace std;
void prntVector(vector<int> &V){ // Here We Will Pass The Actual Vector as Reference Not The Copy
  for (int i = 0; i < V.size(); i++) {
    cout<<V[i]<<endl;
  }
  V.push_back(69);
}
int main()
{
  vector<int> V;
  V.push_back(7);
  V.push_back(8); // O(1)
  V.push_back(9);
  cout<<"The Elements are: "<<endl;
  prntVector(V);
  V.pop_back(); //O(1)
  cout<<"The Elements After Poping: "<<endl;
  prntVector(V);
  vector<int> CPY=V; // O(N)
  cout<<"Copied Vector: "<<endl;
  prntVector(CPY);
  return 0;
}
