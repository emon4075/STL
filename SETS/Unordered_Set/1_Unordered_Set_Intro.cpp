// This Will Store The Strings In Random Order
#include<bits/stdc++.h>
using namespace std;
void printSet(unordered_set<string> &S){
  for(string STR:S ){
    cout<<STR<<endl;
  }
}
int main(){
  unordered_set<string> S;
  S.insert("A");
  S.insert("B");
  S.insert("C");
  S.insert("D"); // O(1)
  printSet(S);
  return 0;
}
