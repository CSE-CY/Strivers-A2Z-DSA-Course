#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void print(int i,int n){
if (i<1){
    return;
  }
  else
  print(i-1,n);
    cout<<i<<endl;
}

int main(){
  int n ; 
  cout<<"Enter the number  ";
  cin>>n;
  print(n,n);
  return 0;
}