// Multi Sets Can Store Multiple Occurance of Same Key
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
  MS.insert("bbc");
  MS.insert("bca");
  printSet(MS);
  return 0;
}
