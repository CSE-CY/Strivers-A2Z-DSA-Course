#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void print(int n){
  int start;
  for(int i=0;i<n;i++)
  { if(i%2==0) start=1;
    else start=0;
    for(int j=0;j<=i;j++){
      cout<<start;
      start=!start;
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