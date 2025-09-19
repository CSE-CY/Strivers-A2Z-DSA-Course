#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void print(int n){
  for(int i=0;i<n;i++)
  {
    for(int j=1;j<=n-i;j++){
      cout<<j;
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