#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void print(int i,int n){
if (i>n){
    return;
  }
  else
  cout<<"nitin bajaj"<<endl;
  print(i+1,n); 
}

int main(){
  int n = 0; 
  cout<<"Enter the number of times to print: ";
  cin>>n;
  print(1,n);
  return 0;
}