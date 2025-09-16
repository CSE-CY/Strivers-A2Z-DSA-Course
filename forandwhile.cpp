#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
int main()
{int a;
  cout<<"Enter a number: ";
  cin>>a;
  do{
    cout<<a<<"\n";
    a=a+1;
  } while(a<5);
  cout<<a<<"\n";
  for(int i=a;i<5;i=i+1){
    cout<<i<<"\n";
  }

  return 0;
}