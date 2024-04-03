// Map Stores Data In Ordered Style
#include<bits/stdc++.h>
using namespace std;
void printMap(map<int,string> &MP){ // Here The Orginal Map Will be Passed
  cout<<"Size of The Map: "<<MP.size()<<endl;
  for(auto &PR: MP){ // This Reference Will Not Create Any Copy Rather Than Passing The Orginal Element
    cout<<PR.first<<" "<<PR.second<<endl;
  }
}
int main()
{
  map<int,string> M;
  M[1]="Emon"; // O(log(N))
  M[3]="Emran";
  M.insert(make_pair(5,"Fahim"));
  M[2]="Saad";
  M.insert({4,"Anik"});
  // map<int,string> ::iterator it;
  // for (it =M.begin(); it != M.end(); it++) {
  //  cout<<it->first<<" "<<it->second<<endl;
  // }
  printMap(M);
  return 0;
}
