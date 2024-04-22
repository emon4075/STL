// Stack Reverses The List
#include<bits/stdc++.h>
using namespace std;
int main(){
  stack<int> S;
  S.push(1);
  S.push(2);
  S.push(3);
  S.push(4);
  S.push(5);
  while (!S.empty()) {
    cout<<S.top()<<endl;
    S.pop();
  }
  return 0;
}
