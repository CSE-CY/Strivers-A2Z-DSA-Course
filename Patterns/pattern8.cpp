#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void space1(int n,int i){
  for(int j=0;j<i;j++)
      cout<<" ";
    }
void print(int n){
  for(int i=0;i<n;i++)
  {
    space1(n,i);
    for (int j=0;j<2*n-(2*i+1);j++)
    cout<<"*";
     space1(n,i);
    cout<<"\n";
  }
}
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  print(n);
  return 0;
}