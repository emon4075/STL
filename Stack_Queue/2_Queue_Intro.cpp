#include<bits/stdc++.h>
#include <queue>
using namespace std;
int main(){
  queue<int> Q;
  Q.push(1);
  Q.push(2);
  Q.push(3);
  Q.push(4);
  Q.push(5);
  while (!Q.empty()) {
    cout<<Q.front()<<endl;
    Q.pop();
  }
  return 0;
}
