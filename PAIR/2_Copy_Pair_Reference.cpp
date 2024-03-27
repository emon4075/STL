/*
 * As we are not taking reference the value of P1.first will not be updated
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  pair<int,string> P1;
  P1=make_pair(10,"Emon");
  cout<<P1.first<<" "<<P1.second<<endl;
  pair<int,string> &P2=P1;
  P2.first=15;
  cout<<P2.first<<" "<<P2.second<<endl;
  cout<<"The First Value of P1 After Being Updated: "<<P1.first<<endl;
  return 0;
}
