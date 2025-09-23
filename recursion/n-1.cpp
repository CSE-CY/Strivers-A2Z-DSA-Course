#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void print(int i,int n){
if (i>n){
    return;
  }
  else
  cout<<n<<endl;
  n--;
  print(i,n); 
}

int main(){
  int n = 0; 
  cout<<"Enter the number  ";
  cin>>n;
  print(1,n);
  return 0;
}