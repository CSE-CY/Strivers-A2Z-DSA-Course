#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
using namespace std;
int main(){
  int cnt=0;
  int n;
  cout<<"enter a number\n";
  cin>>n;
  cnt=log10(n)+1;
  // while (n>0)
  // {
  //   cnt++;
  //   n=n/10;
  // }
  cout<<"the count of digits is "<<cnt;

  return 0;
}
// time complexity is O(log10(n)) using log function
