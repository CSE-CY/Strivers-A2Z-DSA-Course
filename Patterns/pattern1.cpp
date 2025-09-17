#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void printstar(int n){
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++){
      cout<<"*";
    }
    cout<<"\n";
  }
}
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  printstar(n);
  return 0;
}
