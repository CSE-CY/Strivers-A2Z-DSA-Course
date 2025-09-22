#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include <vector> 
#include <algorithm>
using namespace std;
int main(){
  int a,b;
  cout<<"enter two numbers\n";
  cin>>a>>b;
  {
    while(a>0 && b>0){
      if(a>b){
        a=a%b;
      }
      else{
        b=b%a;
      }
    }
  }
  if (a==0){
    cout<<"the gcd or hcf is "<<b;
  }
  return a;
}