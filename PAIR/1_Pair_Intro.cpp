/*
 * Defined in "utility" Header
 * pair <data_type1, data_type2> Pair_name;
 * https://www.geeksforgeeks.org/pair-in-cpp-stl/
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  pair<int,string> P;
  //P=make_pair(10,"Emon");
  P={10,"Emon"};
  cout<<P.first<<" "<<P.second<<endl;
  return 0;
}
