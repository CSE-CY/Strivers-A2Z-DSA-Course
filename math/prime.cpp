#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include <vector> 
#include <algorithm>
using namespace std;
int main(){
  int n;
  int cnt=0;
  cout<<"enter a number\n";
  cin>>n;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      cnt++;
      if(n/i!=i)
      cnt++;}
    }
  if(cnt==2){
    cout<<"the number "<<n<<" is prime\n";
  }
  else{
    cout<<"the number "<<n<<" is not prime\n";
  } 
  return 0;
}