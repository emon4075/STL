/*
 * A[]={1,2,3}
 * B[]={2,3,4}
 */
#include<bits/stdc++.h>
#include <utility>
using namespace std;
int main()
{
  pair<int,int> Array_Pair[3];
  Array_Pair[0]=make_pair(1,2);
  Array_Pair[1]=make_pair(2,3);
  Array_Pair[2]=make_pair(3,4);
  for (int i = 0; i < 3; i++) {
    cout<<Array_Pair[i].first<<" "<<Array_Pair[i].second<<endl;
  }
  return 0;
}
