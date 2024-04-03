// Here Inputs Are In Random Serial
#include<bits/stdc++.h>
using namespace std;
void printMap(unordered_map<int,string> &MP){ // Here The Orginal Map Will be Passed
  cout<<"Size of The Map: "<<MP.size()<<endl;
  for(auto &PR: MP){ // This Reference Will Not Create Any Copy Rather Than Passing The Orginal Element
    cout<<PR.first<<" "<<PR.second<<endl;
  }
}
int main()
{
  unordered_map<int,string> M;
  M[1]="Emon"; // O(1)
  M[3]="Emran";
  M.insert(make_pair(5,"Fahim"));
  M[2]="Saad";
  M.insert({4,"Anik"});
  // unordered_map<int,string> ::iterator it;
  // for (it =M.begin(); it != M.end(); it++) {
  //  cout<<it->first<<" "<<it->second<<endl;
  // }

  // Find Function
  if (M.end()==M.find(6)) { //O(1)
    cout<<"Not Found"<<endl;
  }
  else{
    cout<<"Found"<<endl;
  }
  cout<<"Unordered Map Before Erase: "<<endl;
  printMap(M);
  // Erase Function
  M.erase(3);
  cout<<"Unordered Map After Erase: "<<endl;
  printMap(M);
  return 0;
}
