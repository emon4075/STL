// Ordered Sets Are Like Ordered Maps Containing Only Keys Without Values
// They Store Data Once & Sorted Way
#include<bits/stdc++.h>
using namespace std;
void printSet(set<string> &STR){
  cout<<"Size of Set: "<<STR.size()<<endl;
  for(string S: STR){
    cout<<S<<endl;
  }
}
int main(){
  set<string> S;
  int N;
  cout<<"Enter The Number of Strings: ";
  cin>>N;
  while (N--) {
    string STR;
    cin>>STR;
    S.insert(STR); // O(log(N))
  }
  printSet(S);
  return 0;
}
