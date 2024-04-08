// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE
#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin>>N;
  map<int,multiset<string>> M;
  while (N--) {
    string S;
    int Number;
    cin >> S >> Number;
    M[Number].insert(S);
  }
  for (auto it = M.rbegin(); it != M.rend(); it++) {
    for (const auto &str : it->second) {
      cout << str<<" ";
      cout << it->first <<endl;
    }
  }
  return 0;
}
