#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void number(int n,int i){
  for (int j=1;j<=i;j++)
    cout<<j;
}
void number2(int n,int i){
  for (int j=i;j>=1;j--)
    cout<<j;
}
void print(int n){
  for(int i=1;i<=n;i++)
 {
  number(n,i);
  int space=2*(n-i);
  for(int j=1;j<=space;j++){
      cout<<" ";
    }
  number2(n,i);
  cout<<"\n";
  space=space-2;
 }
}
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  print(n);
  return 0;
}