#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void space(int n,int i){
  for(int j=0;j<n-i-1;j++)
      cout<<" ";
    }
void print(int n){
  for(int i=0;i<=n;i++)
  {
    space(n,i);
    char ch='A';
    int breakpoint=(2*i+1)/2;
    for (int j=1;j<=2*i+1;j++)
    {cout<<ch;
      if (j<=breakpoint)
        {  ch++;}
      else
        {ch--;}}
     space(n,i);
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