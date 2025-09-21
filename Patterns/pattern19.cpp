#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void print(int n){
  int iniS=0;
  for(int i=0;i<n;i++)
  {
    for (int j=1;j<=n-i;j++){
      cout<<"*";
    }
    for(int j=0;j<=iniS;j++){
      cout<<" ";
    }
    for (int j=1;j<=n-i;j++){
      cout<<"*";
    }
    cout<<"\n";
    iniS=iniS+2;
  }
  iniS=2*n-2;
  for(int i=1;i<=n;i++)
  {
    for (int j=1;j<=i;j++){
      cout<<"*";
    }
    for(int j=0;j<=iniS;j++){
      cout<<" ";
    }
    for (int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<"\n";
    iniS=iniS-2;
  }
}
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  print(n);
  return 0;
}