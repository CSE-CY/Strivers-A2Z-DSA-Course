#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void print(int n){
  int spaces=2*n-2;
  for(int i=1;i<=2*n-1;i++)
  {
    int stars=i;
    if(i>n) stars=2*n-i;
    for(int j=1;j<=stars;j++){
      cout<<"*";
    }

    for(int j=1;j<=spaces;j++){
      cout<<" ";
    }

    for(int j=1;j<=stars;j++){
      cout<<"*";
    }
    if(i<n) spaces=spaces-2;
    else spaces=spaces+2;
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