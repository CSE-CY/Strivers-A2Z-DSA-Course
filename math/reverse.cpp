#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
using namespace std;
int main(){
  int rnum=0;
  int n;
  cout<<"enter a number\n";
  cin>>n;
  while (n>0)
  {
    rnum=rnum*10+n%10;
    n=n/10;
  }
  cout<<"the reverse of the number is "<<rnum;

  return 0;
}