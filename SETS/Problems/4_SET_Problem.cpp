// https://www.hackerearth.com/problem/algorithm/monks-birthday-party/?fbclid=IwAR3COuGp9LqoHKWOnfS-duVdKrF0Vx5shbCbGeiWqSgkdoA2z9926vNy5Ew
#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while (T--) {
    int N;
    cin>>N;
    set<string> S;
    while (N--) {
      string ST;
      cin>>ST;
      S.insert(ST);
    }
    for(auto it=S.begin();it!=S.end();it++){
      cout<<*it<<endl;
    }
  }
  return 0;
}
