/*
 * Given N Strings, Print Unique Strings in Lexocographical Order
 * With Their Frequences. Where,
 * N<= 10^5
 * |S| <= 100
 */
#include<bits/stdc++.h>
using namespace std;
void printMap(map<string,int> &MP){
  cout<<"Size of The Map: "<<MP.size()<<endl;
  for(auto &PR: MP){
    cout<<PR.first<<" "<<PR.second<<endl;
  }
}
int main()
{
  map<string,int> MP;
  int N;
  cin>>N;
  for (int i = 0; i < N; i++) {
    string S;
    cin>>S;
    MP[S]++;
  }
  printMap(MP);
  return 0;
}
