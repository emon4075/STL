/*
 * Given N Strings & Q Queries. In Each Query You Are Given A String.
 * Print Yes If The String Is Present Else Print No
 * N <= 10^5
 * |S| <= 100
 * Q <= 10^6
 */
#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main(){
  int N;
  cout<<"Enter The Number of Strings: ";
  cin>>N;
  unordered_set<string> S;
  cout<<"Enter The Strings Into The Unordered Set: "<<endl;
  while (N--) {
    string STR;
    cin>>STR;
    S.insert(STR);
  }
  int Q;
  cout<<"Enter The Number of Queries: ";
  cin>>Q;
  while (Q--) {
    string STR;
    cin>>STR;
    if (S.end()==S.find(STR)) {
      cout<<"Not Found"<<endl;
    }
    else{
      cout<<"Found"<<endl;
    }
  }
  return 0;
}
