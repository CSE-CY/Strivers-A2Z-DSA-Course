#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void print(int n){
  char A='A';
  for(int i=1;i<=n;i++)
  {
    for(char ch='A';ch<'A'+i;ch++){
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