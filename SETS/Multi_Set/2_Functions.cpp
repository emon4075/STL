#include<bits/stdc++.h>
using namespace std;
void printSet(multiset<string> &S){
  for(string ST:S ){
    cout<<ST<<endl;
  }
}
int main(){
  multiset<string> MS;
  MS.insert("abc");
  MS.insert("abc");
  MS.insert("abc");
  MS.insert("bbc");
  MS.insert("bca");
  cout<<"Before Erase: "<<endl;
  printSet(MS);
  cout<<"After Erasing abc Only Once: "<<endl;
  auto it = MS.find("abc");
  MS.erase(it);
  printSet(MS);
  cout<<"After Erasing All Occurances of abc: "<<endl;
  MS.erase("abc");
  printSet(MS);
  return 0;
}
