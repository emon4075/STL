#include<bits/stdc++.h>
#include <utility>
using namespace std;
int main()
{
  vector<int> V(10,3);
  vector<int> ::iterator it;
  for (it = V.begin(); it != V.end(); it++) {
    cout<<*it<<" ";
  }
  cout<<endl;
  vector<pair<int,int>>V_P={{1,2},{2,3},{3,4}};
  vector<pair<int,int>> :: iterator et;
  cout<<"Method-01 : "<<endl;
  for (et = V_P.begin(); et != V_P.end(); et++) {
    cout<< (*et).first<<" "<<(*et).second<<endl;
  }
  cout<<"Method-02 : "<<endl;
  for (et = V_P.begin(); et != V_P.end(); et++) {
    cout<< et->first<<" "<<et->second<<endl;
  }
  // (*it).first == it->first
  return 0;
}
