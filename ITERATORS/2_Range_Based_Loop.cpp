#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> V={1,2,3,4,5,6};
  cout<<"The Actual Vector: "<<endl;
  for(int X: V)
  {
    cout<<X<<" ";
  }
  cout<<endl;
  for(int &X: V) // Here We Passed The Actual Value Through Reference Not The Copy
  {
    X++;
  }
  cout<<"The Vector After Performing Increment Operation Through Reference: "<<endl;
  for(int X: V)
  {
    cout<<X<<" ";
  }
  cout<<endl;
  return 0;
}
