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
  int sum=0;
  while (n>0)
  {
    rnum=rnum*10+n%10;
    n=n/10;
    sum=sum+(n%10)*(n%10)*(n%10);
  }
 if(original==sum) {
    cout<<"the number "<<original<<" is armstrong ";
  }
  else{
    cout<<"the number "<<original<<" is not armstrong ";

 }

  return 0;
}