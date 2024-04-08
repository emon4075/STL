// https://www.hackerrank.com/challenges/cpp-sets/problem?fbclid=IwAR1Z1fv5RnGAqByvADCRUv4pYQAAmQ_zV5rgVVCagY-DneWu6TSWENdncsY
#include<bits/stdc++.h>
using namespace std;
int main(){
  int Q;
  cin>>Q;    
  unordered_set<int> S;
  while (Q--) {
    int X,Y;
    cin>>Y>>X;
    if (Y==1) {
      S.insert(X);
    }
    else if(Y==2){
      if(S.find(X)!=S.end()){
        S.erase(X);
      }
    }
    else{
      if(S.find(X)!=S.end()){
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
    }

  }
  return 0;
}
