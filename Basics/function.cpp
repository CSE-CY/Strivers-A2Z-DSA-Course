#include <iostream>
#include <cmath>
#include<string.h>
using namespace std;
void table(int n){
  for(int i=n;i<=10*n;i=i+n)
    cout<<" " <<i<<"\n";
}
int main(){
  int a;
  cout<<"Enter a number: ";
  cin>>a;
  table(a);
  return 0;
}
