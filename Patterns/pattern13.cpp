#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void print(int n){
  int num=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++){
      cout<<num<<" ";
      num=num+1;
    }
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