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
    S.insert(STR);
  }
  // Find Function
  auto it=S.find("ABC");
  if (it==S.end()) {
    cout<<"Not Found"<<endl;
  }
  else{
    cout<<"Found"<<endl;
  }
  // Erase Function
  cout<<"SET Before Erase: "<<endl;
  printSet(S);
  S.erase("abc");
  cout<<"SET After Erase: "<<endl;
  printSet(S);
  return 0;
}
