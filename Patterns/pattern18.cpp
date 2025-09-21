#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void print(int n){
  for(int i=0;i<n;i++)
  {
    for(char ch='E'-i;ch<='E';ch++){
      cout<<ch<<" ";
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