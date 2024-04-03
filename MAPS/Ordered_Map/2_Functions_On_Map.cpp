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
  // Find Function
  auto it = M.find(3); // O(log(n))
  if (it==M.end()) {
    cout<<"NOT Found"<<endl;
  }
  else{
    cout<<it->first<<" "<<it->second<<endl;
  }
  // Erase Function Using Key
  M.erase(3); // O(log(N))
  printMap(M);
  // Erase Function Using Iterator
  it=M.find(2);
  if (it!=M.end()) {
    M.erase(it);
    cout<<"Map After The Erase: "<<endl;
    printMap(M);
  }
  else{
    cout<<"This Element Can't Be Erased"<<endl;
  }
  return 0;
}
