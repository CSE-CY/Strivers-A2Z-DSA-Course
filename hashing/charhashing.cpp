#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
using namespace std;
int main(){
   string s;
     cin>>s;
  int hash[256]={0};
  for(int i=0;i<s.size();i++){
    hash[s[i]]++;
  }
  int q;
  cout<<"enter the number of query"<<endl;
  cin>>q;
  while(q--)
  {
    char c;
    cout<<"enter the character for detais ";
    cin>>c;
    cout<<hash[c]<<endl;
  }
  return 0;
}