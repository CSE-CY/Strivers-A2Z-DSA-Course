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
  int original=n;
  while (n>0)
  {
    rnum=rnum*10+n%10;
    n=n/10;
  }
 if(rnum==original) {
    cout<<"the number "<<rnum<<" is palindrome ";
  }
  else{
    cout<<"the number "<<rnum<<" is not palindrome ";

 }

  return 0;
}