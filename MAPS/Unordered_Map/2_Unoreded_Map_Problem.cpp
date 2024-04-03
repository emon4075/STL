/*
 * Given N Strings & Q Queries. In each Queries you are 
 * given a string. Print The Frequency Of That String 
 * N<= 10^6
 * |S| <= 100
 * Q <= 10^6
 */
// Same Problem Can Be Solved Via Ordered Map But By Using Unordered Map We Have Better Time Complexity
#include<bits/stdc++.h>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
  int N;
  cout<<"Enter The Number of Strings: ";
  cin>>N;
  unordered_map<string,int>M;
  while (N--) {
    string S;
    cin>>S;
    M[S]++;
  }
  int Q;
  cout<<"Enter The Number of Queries: ";
  cin>>Q;
  while (Q--) {
    string S;
    cout<<"Enter The String of Your Query: ";
    cin>>S;
    cout<<"Frequency is: "<<M[S]<<endl;
  }
}
