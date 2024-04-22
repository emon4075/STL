#include<bits/stdc++.h>
using namespace std;
string isBalanced(string s) {
  stack<char> ST;
  for(auto C: s){
    if (C=='(' || C=='{' || C=='[') {
      ST.push(C);
    }
    else {
      if (ST.empty()) return "NO";
      char top = ST.top();
      if ((C == ')' && top == '(') || (C == '}' && top == '{') || (C == ']' && top == '[')) {
        ST.pop();
      } else {
        return "NO";
      }
    }
  }
  if (ST.empty()) {
    return "YES";
  }
  return "NO";
}

int main(){
  string S;
  cin>>S;
  cout<<isBalanced(S);

  return 0;
}
