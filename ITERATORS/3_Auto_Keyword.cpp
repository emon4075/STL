// Auto Keyword Can Be Used Anytime & Anywhere
#include<bits/stdc++.h>
using namespace std;
int main()
{
  auto a='x';
  cout<<sizeof(a)<<endl;
  vector<string> V;
  V.push_back("Emon");
  V.push_back("Saad");
  V.push_back("Anik");
  V.push_back("Emran");
  V.push_back("Fahim");
  cout<<"Using Auto In Range Based Loop: "<<endl;
  for(auto Name: V)
  {
    cout<<"Name"<<endl;
  }
  return 0;
}
