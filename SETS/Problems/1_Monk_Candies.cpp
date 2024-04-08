// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4
#include<bits/stdc++.h>
#include <set>
using namespace std;
int main(){
  long long T,N,K;
  cin>>T;
  while (T--) {
    cin>>N>>K;
    multiset<long long> MS;
    while (N--) {
      long long X;
      cin>>X;
      MS.insert(X);
    }
    long long Ans=0;
    while (K--) {
      auto it = --MS.end();
      long long Count=*it;
      Ans+=Count;
      MS.erase(it);
      MS.insert(Count/2);
    }
    cout<<Ans<<endl;
  }
  return 0;
}
