#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include <vector> 
#include <algorithm>
using namespace std;
int main(){
  int n;
  cout<<"enter a number\n";
  cin>>n;
  vector<int> divisors;
  cout<<"the divisors of the number are \n";
  for(int i=1;i*i<=n;i++){
    if(n%i==0)
      divisors.push_back(i);
      if(i!=n/i){
        divisors.push_back(n/i);
      }
  }
  sort(divisors.begin(),divisors.end());
for(auto d:divisors){
    cout<<d<<"\n";
  } 
  // for(int i=1;i<=n;i++){
  //   if(n%i==0){
  //     cout<<i<<"\n";
  //   }
  // }

  return 0;
}