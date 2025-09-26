#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
   string s;
     cin>>s;
unordered_map<char,int>mpp;
  for(int i=0;i<s.size();i++){
    mpp[s[i]]++;
  }
  int q;
  cout<<"enter the number of query"<<endl;
  cin>>q;
  while(q--)
  {
    char c;
    cout<<"enter the character for detais ";
    cin>>c;
    cout<<mpp[c]<<endl;
  }
  return 0;
}